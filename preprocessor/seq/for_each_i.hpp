# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Paul Mensonides 2002.
#  *     Distributed under the Boost Software License, Version 1.0. (See
#  *     accompanying file LICENSE_1_0.txt or copy at
#  *     http://www.boost.org/LICENSE_1_0.txt)
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef BOOST_PREPROCESSOR_SEQ_FOR_EACH_I_HPP
# define BOOST_PREPROCESSOR_SEQ_FOR_EACH_I_HPP
#
# include <boost/preprocessor/arithmetic/dec.hpp>
# include <boost/preprocessor/arithmetic/inc.hpp>
# include <boost/preprocessor/config/config.hpp>
# include <boost/preprocessor/repetition/for.hpp>
# include <boost/preprocessor/seq/seq.hpp>
# include <boost/preprocessor/seq/size.hpp>
# include <boost/preprocessor/tuple/elem.hpp>
# include <boost/preprocessor/tuple/rem.hpp>
#
# /* BOOST_PP_SEQ_FOR_EACH_I */
#
# if ~BOOST_PP_CONFIG_FLAGS() & BOOST_PP_CONFIG_EDG()
#    define BOOST_PP_SEQ_FOR_EACH_I(macro, data, seq) BOOST_PP_FOR((macro, data, seq, 0, BOOST_PP_SEQ_SIZE(seq)), BOOST_PP_SEQ_FOR_EACH_I_P, BOOST_PP_SEQ_FOR_EACH_I_O, BOOST_PP_SEQ_FOR_EACH_I_M)
# else
#    define BOOST_PP_SEQ_FOR_EACH_I(macro, data, seq) BOOST_PP_SEQ_FOR_EACH_I_I(macro, data, seq)
#    define BOOST_PP_SEQ_FOR_EACH_I_I(macro, data, seq) BOOST_PP_FOR((macro, data, seq, 0, BOOST_PP_SEQ_SIZE(seq)), BOOST_PP_SEQ_FOR_EACH_I_P, BOOST_PP_SEQ_FOR_EACH_I_O, BOOST_PP_SEQ_FOR_EACH_I_M)
# endif
#
# define BOOST_PP_SEQ_FOR_EACH_I_P(r, x) BOOST_PP_TUPLE_ELEM(5, 4, x)
#
# if BOOST_PP_CONFIG_FLAGS() & BOOST_PP_CONFIG_STRICT()
#    define BOOST_PP_SEQ_FOR_EACH_I_O(r, x) BOOST_PP_SEQ_FOR_EACH_I_O_I x
# else
#    define BOOST_PP_SEQ_FOR_EACH_I_O(r, x) BOOST_PP_SEQ_FOR_EACH_I_O_I(BOOST_PP_TUPLE_ELEM(5, 0, x), BOOST_PP_TUPLE_ELEM(5, 1, x), BOOST_PP_TUPLE_ELEM(5, 2, x), BOOST_PP_TUPLE_ELEM(5, 3, x), BOOST_PP_TUPLE_ELEM(5, 4, x))
# endif
#
# define BOOST_PP_SEQ_FOR_EACH_I_O_I(macro, data, seq, i, sz) (macro, data, BOOST_PP_SEQ_TAIL(seq), BOOST_PP_INC(i), BOOST_PP_DEC(sz))
#
# if BOOST_PP_CONFIG_FLAGS() & BOOST_PP_CONFIG_STRICT()
#    define BOOST_PP_SEQ_FOR_EACH_I_M(r, x) BOOST_PP_SEQ_FOR_EACH_I_M_IM(r, BOOST_PP_TUPLE_REM_5 x)
#    define BOOST_PP_SEQ_FOR_EACH_I_M_IM(r, im) BOOST_PP_SEQ_FOR_EACH_I_M_I(r, im)
# else
#    define BOOST_PP_SEQ_FOR_EACH_I_M(r, x) BOOST_PP_SEQ_FOR_EACH_I_M_I(r, BOOST_PP_TUPLE_ELEM(5, 0, x), BOOST_PP_TUPLE_ELEM(5, 1, x), BOOST_PP_TUPLE_ELEM(5, 2, x), BOOST_PP_TUPLE_ELEM(5, 3, x), BOOST_PP_TUPLE_ELEM(5, 4, x))
# endif
#
# define BOOST_PP_SEQ_FOR_EACH_I_M_I(r, macro, data, seq, i, sz) macro(r, data, i, BOOST_PP_SEQ_HEAD(seq))
#
# /* BOOST_PP_SEQ_FOR_EACH_I_R */
#
# if ~BOOST_PP_CONFIG_FLAGS() & BOOST_PP_CONFIG_EDG()
#    define BOOST_PP_SEQ_FOR_EACH_I_R(r, macro, data, seq) BOOST_PP_FOR_ ## r((macro, data, seq, 0, BOOST_PP_SEQ_SIZE(seq)), BOOST_PP_SEQ_FOR_EACH_I_P, BOOST_PP_SEQ_FOR_EACH_I_O, BOOST_PP_SEQ_FOR_EACH_I_M)
# else
#    define BOOST_PP_SEQ_FOR_EACH_I_R(r, macro, data, seq) BOOST_PP_SEQ_FOR_EACH_I_R_I(r, macro, data, seq)
#    define BOOST_PP_SEQ_FOR_EACH_I_R_I(r, macro, data, seq) BOOST_PP_FOR_ ## r((macro, data, seq, 0, BOOST_PP_SEQ_SIZE(seq)), BOOST_PP_SEQ_FOR_EACH_I_P, BOOST_PP_SEQ_FOR_EACH_I_O, BOOST_PP_SEQ_FOR_EACH_I_M)
# endif
#
# endif
