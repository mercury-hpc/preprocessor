# ifndef BOOST_PREPROCESSOR_ITERATE_HPP
# define BOOST_PREPROCESSOR_ITERATE_HPP
#
# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Paul Mensonides 2002.  Permission to copy, use,        *
#  *     modify, sell, and distribute this software is granted provided       *
#  *     this copyright notice appears in all copies.  This software is       *
#  *     provided "as is" without express or implied warranty, and with       *
#  *     no claim at to its suitability for any purpose.                      *
#  *                                                                          *
#  ************************************************************************** */
#
# include <boost/preprocessor/array.hpp>
# include <boost/preprocessor/dec.hpp>
# include <boost/preprocessor/inc.hpp>
# include <boost/preprocessor/stringize.hpp>
#
# include <boost/preprocessor/tuple/elem.hpp>
#
# include <boost/preprocessor/detail/cat.hpp>
# include <boost/preprocessor/detail/line.hpp>
#
# define BOOST_PP_ITERATION_DEPTH_LIMIT 5
# define BOOST_PP_ITERATION_LIMIT 256
#
# define BOOST_PP_ITERATION_DEPTH() 0
#
# define BOOST_PP_ITERATION() BOOST_PP_DETAIL_CAT2(BOOST_PP_ITERATION_, BOOST_PP_ITERATION_DEPTH())
#
# define BOOST_PP_ITERATION_START() BOOST_PP_DETAIL_CAT2(BOOST_PP_ITERATION_START_, BOOST_PP_ITERATION_DEPTH())
# define BOOST_PP_ITERATION_FINISH() BOOST_PP_DETAIL_CAT2(BOOST_PP_ITERATION_FINISH_, BOOST_PP_ITERATION_DEPTH())
#
# define BOOST_PP_FRAME_ITERATION(i) BOOST_PP_DETAIL_CAT2(BOOST_PP_ITERATION_, i)
# define BOOST_PP_RELATIVE_ITERATION(i) BOOST_PP_DETAIL_CAT2(BOOST_PP_RELATIVE_, i)(BOOST_PP_ITERATION_)
#
# define BOOST_PP_FRAME_START(i) BOOST_PP_DETAIL_CAT2(BOOST_PP_ITERATION_START_, i)
# define BOOST_PP_RELATIVE_START(i) BOOST_PP_DETAIL_CAT2(BOOST_PP_RELATIVE_, i)(BOOST_PP_ITERATION_START_)
#
# define BOOST_PP_FRAME_FINISH(i) BOOST_PP_DETAIL_CAT2(BOOST_PP_ITERATION_FINISH_, i)
# define BOOST_PP_RELATIVE_FINISH(i) BOOST_PP_DETAIL_CAT2(BOOST_PP_RELATIVE_, i)(BOOST_PP_ITERATION_FINISH_)
#
# define BOOST_PP_ITERATION_FLAGS() BOOST_PP_DETAIL_CAT2(BOOST_PP_ITERATION_FLAGS_, BOOST_PP_ITERATION_DEPTH())
# define BOOST_PP_FRAME_FLAGS(i) BOOST_PP_DETAIL_CAT2(BOOST_PP_ITERATION_FLAGS_, i)
# define BOOST_PP_RELATIVE_FLAGS(i) BOOST_PP_DETAIL_CAT2(BOOST_PP_RELATIVE_, i)(BOOST_PP_ITERATION_FLAGS_)
#
# define BOOST_PP_RELATIVE_0(m) BOOST_PP_DETAIL_CAT2(m, BOOST_PP_ITERATION_DEPTH())
# define BOOST_PP_RELATIVE_1(m) BOOST_PP_DETAIL_CAT2(m, BOOST_PP_DEC(BOOST_PP_ITERATION_DEPTH()))
# define BOOST_PP_RELATIVE_2(m) BOOST_PP_DETAIL_CAT2(m, BOOST_PP_DEC(BOOST_PP_DEC(BOOST_PP_ITERATION_DEPTH())))
# define BOOST_PP_RELATIVE_3(m) BOOST_PP_DETAIL_CAT2(m, BOOST_PP_DEC(BOOST_PP_DEC(BOOST_PP_DEC(BOOST_PP_ITERATION_DEPTH()))))
# define BOOST_PP_RELATIVE_4(m) BOOST_PP_DETAIL_CAT2(m, BOOST_PP_DEC(BOOST_PP_DEC(BOOST_PP_DEC(BOOST_PP_DEC(BOOST_PP_ITERATION_DEPTH())))))
#
# /* hotfix:  these will be removed shortly! */
# define BOOST_PP_SET_ITERATION_START() BOOST_PP_DETAIL_CAT2(BOOST_PP_SET_ITERATION_START_, BOOST_PP_INC(BOOST_PP_ITERATION_DEPTH()))
# define BOOST_PP_SET_ITERATION_START_1 <boost/preprocessor/detail/iterate/lower1.hpp>
# define BOOST_PP_SET_ITERATION_START_2 <boost/preprocessor/detail/iterate/lower2.hpp>
# define BOOST_PP_SET_ITERATION_START_3 <boost/preprocessor/detail/iterate/lower3.hpp>
# define BOOST_PP_SET_ITERATION_START_4 <boost/preprocessor/detail/iterate/lower4.hpp>
# define BOOST_PP_SET_ITERATION_START_5 <boost/preprocessor/detail/iterate/lower5.hpp>
#
# define BOOST_PP_SET_ITERATION_FINISH() BOOST_PP_DETAIL_CAT2(BOOST_PP_SET_ITERATION_FINISH_, BOOST_PP_INC(BOOST_PP_ITERATION_DEPTH()))
# define BOOST_PP_SET_ITERATION_FINISH_1 <boost/preprocessor/detail/iterate/upper1.hpp>
# define BOOST_PP_SET_ITERATION_FINISH_2 <boost/preprocessor/detail/iterate/upper2.hpp>
# define BOOST_PP_SET_ITERATION_FINISH_3 <boost/preprocessor/detail/iterate/upper3.hpp>
# define BOOST_PP_SET_ITERATION_FINISH_4 <boost/preprocessor/detail/iterate/upper4.hpp>
# define BOOST_PP_SET_ITERATION_FINISH_5 <boost/preprocessor/detail/iterate/upper5.hpp>
#
# define BOOST_PP_SET_ITERATION_FLAGS() BOOST_PP_DETAIL_CAT2(BOOST_PP_SET_ITERATION_FLAGS_, BOOST_PP_INC(BOOST_PP_ITERATION_DEPTH()))
# define BOOST_PP_SET_ITERATION_FLAGS_1 <boost/preprocessor/detail/iterate/flags1.hpp>
# define BOOST_PP_SET_ITERATION_FLAGS_2 <boost/preprocessor/detail/iterate/flags2.hpp>
# define BOOST_PP_SET_ITERATION_FLAGS_3 <boost/preprocessor/detail/iterate/flags3.hpp>
# define BOOST_PP_SET_ITERATION_FLAGS_4 <boost/preprocessor/detail/iterate/flags4.hpp>
# define BOOST_PP_SET_ITERATION_FLAGS_5 <boost/preprocessor/detail/iterate/flags5.hpp>
#
# if defined BOOST_PP_EXTENDED_LINE_INFO && (!defined(__MWERKS__) || __MWERKS__ > 0x3001)
#   define BOOST_PP_LINE(line, file) line BOOST_PP_STRINGIZE(file BOOST_PP_DETAIL_CAT2(BOOST_PP_LINE_, BOOST_PP_ITERATION_DEPTH()))
# else
#   define BOOST_PP_LINE(line, file) __LINE__
# endif
#
# define BOOST_PP_LINE_0() (!BOOST_PP_ERROR_NO_ACTIVE_ITERATION)
# define BOOST_PP_LINE_1() BOOST_PP_DETAIL_CAT3([, BOOST_PP_ITERATION(), ])
# define BOOST_PP_LINE_2() BOOST_PP_DETAIL_CAT2(BOOST_PP_DETAIL_CAT3([, BOOST_PP_FRAME_ITERATION(1), ]), BOOST_PP_LINE_1())
# define BOOST_PP_LINE_3() BOOST_PP_DETAIL_CAT2(BOOST_PP_DETAIL_CAT3([, BOOST_PP_FRAME_ITERATION(2), ]), BOOST_PP_LINE_2())
# define BOOST_PP_LINE_4() BOOST_PP_DETAIL_CAT2(BOOST_PP_DETAIL_CAT3([, BOOST_PP_FRAME_ITERATION(3), ]), BOOST_PP_LINE_3())
# define BOOST_PP_LINE_5() BOOST_PP_DETAIL_CAT2(BOOST_PP_DETAIL_CAT3([, BOOST_PP_FRAME_ITERATION(4), ]), BOOST_PP_LINE_4())
#
# define BOOST_PP_ITERATE() BOOST_PP_DETAIL_CAT2(BOOST_PP_ITERATE_, BOOST_PP_INC(BOOST_PP_ITERATION_DEPTH()))
# define BOOST_PP_ITERATE_1 <boost/preprocessor/detail/iterate/exp1.hpp>
# define BOOST_PP_ITERATE_2 <boost/preprocessor/detail/iterate/exp2.hpp>
# define BOOST_PP_ITERATE_3 <boost/preprocessor/detail/iterate/exp3.hpp>
# define BOOST_PP_ITERATE_4 <boost/preprocessor/detail/iterate/exp4.hpp>
# define BOOST_PP_ITERATE_5 <boost/preprocessor/detail/iterate/exp5.hpp>
#
# define BOOST_PP_LOCAL_ITERATE() <boost/preprocessor/detail/iterate/local_iterate.hpp>
#
# define BOOST_PP_INCLUDE_SELF() <boost/preprocessor/detail/iterate/self.hpp>
#
# endif
