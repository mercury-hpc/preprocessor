#ifndef BOOST_PREPROCESSOR_LOGICAL_NOT_HPP
#define BOOST_PREPROCESSOR_LOGICAL_NOT_HPP

// Copyright (C) 2001
// Housemarque Oy
// http://www.housemarque.com
//
// Permission to copy, use, modify, sell and distribute this software is
// granted provided this copyright notice appears in all copies. This
// software is provided "as is" without express or implied warranty, and
// with no claim as to its suitability for any purpose.

// See http://www.boost.org for most recent version.

/*! \file

<a href="../../../../boost/preprocessor/logical/not.hpp">Click here to see the header.</a>
*/

#ifndef BOOST_PREPROCESSOR_LOGICAL_NOR_HPP
#  include <boost/preprocessor/logical/nor.hpp>
#endif

//! Expands to the logical NOT of the operand.
#define BOOST_PREPROCESSOR_NOT(X) BOOST_PREPROCESSOR_NOR(X,X)
#endif
