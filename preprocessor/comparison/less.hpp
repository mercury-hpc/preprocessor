#ifndef BOOST_PREPROCESSOR_COMPARISON_LESS_HPP
#define BOOST_PREPROCESSOR_COMPARISON_LESS_HPP

/* Copyright (C) 2001
 * Housemarque Oy
 * http://www.housemarque.com
 *
 * Permission to copy, use, modify, sell and distribute this software is
 * granted provided this copyright notice appears in all copies. This
 * software is provided "as is" without express or implied warranty, and
 * with no claim as to its suitability for any purpose.
 *
 * See http://www.boost.org for most recent version.
 */

/** \file

<a href="../../../../boost/preprocessor/comparison/less.hpp">Click here to see the header.</a>
*/

#include <boost/preprocessor/comparison/less_equal.hpp>
#include <boost/preprocessor/comparison/not_equal.hpp>
#include <boost/preprocessor/logical/and.hpp>

/** Expands to 1 if X<Y and 0 otherwise.

<H3>Uses</H3>
- BOOST_PP_WHILE()
*/
#define BOOST_PP_LESS(X,Y) BOOST_PP_LESS_D(0,X,Y)

#ifndef DOXYGEN_SHOULD_SKIP_THIS
#define BOOST_PP_LESS_D(D,X,Y) BOOST_PP_AND(BOOST_PP_NOT_EQUAL_D(D,X,Y),BOOST_PP_LESS_EQUAL_D(D,X,Y))
#endif

/** Obsolete. Use BOOST_PP_LESS(). */
#define BOOST_PREPROCESSOR_LESS(X,Y) BOOST_PP_LESS(X,Y)
#endif
