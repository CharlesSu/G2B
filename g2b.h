//�Ƿ񽫶�function _(arg)�ĵ�������
//# define __INLINE_IMPL_TO_TERNARY__
# ifdef __INLINE_IMPL_TO_TERNARY__
# 	define _(arg) (arg._impl ? arg._impl : arg)
# endif

//�Ƿ����g2b,b2g�Ĵ�������ת��
//#define __GOOGLE__
//�Ƿ񽫴�������ת������:
//��ת����������
//ת������ѡ���Ƿ�����
//#define __INLINE_LOOSE_CONVERT_TO_GOOGLE__
# ifdef __INLINE_LOOSE_CONVERT_TO_GOOGLE__
# 	define TO_BLNG(lng)	(lng+65E-4)
# 	define TO_BLAT(lat)	(lat+60E-4)
#	define TO_GLNG(lng)	(lng-65E-4)
#	define TO_GLAT(lat)	(lat-60E-4)
# else
#	define TO_BLNG(lng) lng
#	define TO_BLAT(lat) lat
#	define TO_GLNG(lng) lng
#	define TO_GLAT(lat) lat
# endif
