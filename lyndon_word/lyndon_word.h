// Author: Ivan Kazmenko (gassa@mail.ru)
#ifndef LYNDON_WORD_H_
#define LYNDON_WORD_H_
#include "combinatorial_object.h"
class LyndonWord : public CombinatorialObject
{
public:
	/// total number of objects of length n
	/// undefined if negative or overflow
	int64_t total (int n);

	/// lexicographically sorted vector of all objects of length n
	/// undefined if negative
	vector <vector <int> > generate_all (int n);

	/// validity of given object
	bool is_valid (vector <int> const & v);

	/// 0-based lexicographical number of given valid object,
	/// undefined if overflow
	int64_t number_by_object (vector <int> const & v);

	/// object of length n with given 0-based lexicographical number,
	/// undefined if out of bounds
	vector <int> object_by_number (int n, int64_t k);

	/// transform valid object to lexicographically previous object,
	/// true if successful, false and undefined state if was first
	bool prev (vector <int> & v);

	/// transform valid object to lexicographically next object,
	/// true if successful, false and undefined state if was last
	bool next (vector <int> & v);

	/// name of combinatorial object
	string name ();

	/// destructor
	~LyndonWord ();
};
#endif // LYNDON_WORD_H_
