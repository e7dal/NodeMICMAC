// File Automatically generated by eLiSe
#include "general/all.h"
#include "private/all.h"
#include "cEqAppui_X_C2MDRad5.h"


cEqAppui_X_C2MDRad5::cEqAppui_X_C2MDRad5():
    cElCompiledFonc(1)
{
   AddIntRef (cIncIntervale("Intr",0,10));
   AddIntRef (cIncIntervale("Orient",10,16));
   Close(false);
}



void cEqAppui_X_C2MDRad5::ComputeVal()
{
   double tmp0_ = mCompCoord[10];
   double tmp1_ = mCompCoord[11];
   double tmp2_ = cos(tmp1_);
   double tmp3_ = sin(tmp0_);
   double tmp4_ = cos(tmp0_);
   double tmp5_ = sin(tmp1_);
   double tmp6_ = mCompCoord[12];
   double tmp7_ = mCompCoord[13];
   double tmp8_ = mLocXTer-tmp7_;
   double tmp9_ = sin(tmp6_);
   double tmp10_ = -(tmp9_);
   double tmp11_ = -(tmp5_);
   double tmp12_ = cos(tmp6_);
   double tmp13_ = mCompCoord[14];
   double tmp14_ = mLocYTer-tmp13_;
   double tmp15_ = mCompCoord[15];
   double tmp16_ = mLocZTer-tmp15_;
   double tmp17_ = mCompCoord[3];
   double tmp18_ = mLocXIm-tmp17_;
   double tmp19_ = mCompCoord[4];
   double tmp20_ = mLocYIm-tmp19_;
   double tmp21_ = (tmp18_)*(tmp18_);
   double tmp22_ = (tmp20_)*(tmp20_);
   double tmp23_ = tmp21_+tmp22_;
   double tmp24_ = (tmp23_)*(tmp23_);
   double tmp25_ = tmp24_*(tmp23_);
   double tmp26_ = tmp25_*(tmp23_);

  mVal[0] = (mCompCoord[1]+mCompCoord[0]*((tmp4_*tmp2_*(tmp8_)+tmp3_*tmp2_*(tmp14_)+tmp5_*(tmp16_))/((-(tmp3_)*tmp10_+tmp4_*tmp11_*tmp12_)*(tmp8_)+(tmp4_*tmp10_+tmp3_*tmp11_*tmp12_)*(tmp14_)+tmp2_*tmp12_*(tmp16_))))-(tmp17_+(tmp18_)*(1+(tmp23_)*mCompCoord[5]+tmp24_*mCompCoord[6]+tmp25_*mCompCoord[7]+tmp26_*mCompCoord[8]+tmp26_*(tmp23_)*mCompCoord[9]));

}


void cEqAppui_X_C2MDRad5::ComputeValDeriv()
{
   double tmp0_ = mCompCoord[10];
   double tmp1_ = mCompCoord[11];
   double tmp2_ = cos(tmp1_);
   double tmp3_ = sin(tmp0_);
   double tmp4_ = cos(tmp0_);
   double tmp5_ = sin(tmp1_);
   double tmp6_ = mCompCoord[12];
   double tmp7_ = mCompCoord[13];
   double tmp8_ = mLocXTer-tmp7_;
   double tmp9_ = sin(tmp6_);
   double tmp10_ = -(tmp9_);
   double tmp11_ = -(tmp5_);
   double tmp12_ = cos(tmp6_);
   double tmp13_ = mCompCoord[14];
   double tmp14_ = mLocYTer-tmp13_;
   double tmp15_ = mCompCoord[15];
   double tmp16_ = mLocZTer-tmp15_;
   double tmp17_ = mCompCoord[3];
   double tmp18_ = mLocXIm-tmp17_;
   double tmp19_ = mCompCoord[4];
   double tmp20_ = mLocYIm-tmp19_;
   double tmp21_ = (tmp18_)*(tmp18_);
   double tmp22_ = (tmp20_)*(tmp20_);
   double tmp23_ = tmp21_+tmp22_;
   double tmp24_ = (tmp23_)*(tmp23_);
   double tmp25_ = tmp24_*(tmp23_);
   double tmp26_ = tmp25_*(tmp23_);
   double tmp27_ = tmp4_*tmp2_;
   double tmp28_ = tmp27_*(tmp8_);
   double tmp29_ = tmp3_*tmp2_;
   double tmp30_ = tmp29_*(tmp14_);
   double tmp31_ = tmp28_+tmp30_;
   double tmp32_ = tmp5_*(tmp16_);
   double tmp33_ = tmp31_+tmp32_;
   double tmp34_ = -(tmp3_);
   double tmp35_ = tmp34_*tmp10_;
   double tmp36_ = tmp4_*tmp11_;
   double tmp37_ = tmp36_*tmp12_;
   double tmp38_ = tmp35_+tmp37_;
   double tmp39_ = (tmp38_)*(tmp8_);
   double tmp40_ = tmp4_*tmp10_;
   double tmp41_ = tmp3_*tmp11_;
   double tmp42_ = tmp41_*tmp12_;
   double tmp43_ = tmp40_+tmp42_;
   double tmp44_ = (tmp43_)*(tmp14_);
   double tmp45_ = tmp39_+tmp44_;
   double tmp46_ = tmp2_*tmp12_;
   double tmp47_ = tmp46_*(tmp16_);
   double tmp48_ = tmp45_+tmp47_;
   double tmp49_ = (tmp33_)/(tmp48_);
   double tmp50_ = mCompCoord[5];
   double tmp51_ = (tmp23_)*tmp50_;
   double tmp52_ = 1+tmp51_;
   double tmp53_ = mCompCoord[6];
   double tmp54_ = tmp24_*tmp53_;
   double tmp55_ = tmp52_+tmp54_;
   double tmp56_ = mCompCoord[7];
   double tmp57_ = tmp25_*tmp56_;
   double tmp58_ = tmp55_+tmp57_;
   double tmp59_ = mCompCoord[8];
   double tmp60_ = tmp26_*tmp59_;
   double tmp61_ = tmp58_+tmp60_;
   double tmp62_ = tmp26_*(tmp23_);
   double tmp63_ = mCompCoord[9];
   double tmp64_ = tmp62_*tmp63_;
   double tmp65_ = tmp61_+tmp64_;
   double tmp66_ = -(1);
   double tmp67_ = tmp66_*(tmp18_);
   double tmp68_ = tmp67_+tmp67_;
   double tmp69_ = (tmp68_)*(tmp23_);
   double tmp70_ = tmp69_+tmp69_;
   double tmp71_ = (tmp70_)*(tmp23_);
   double tmp72_ = (tmp68_)*tmp24_;
   double tmp73_ = tmp71_+tmp72_;
   double tmp74_ = (tmp73_)*(tmp23_);
   double tmp75_ = (tmp68_)*tmp25_;
   double tmp76_ = tmp74_+tmp75_;
   double tmp77_ = tmp66_*(tmp20_);
   double tmp78_ = tmp77_+tmp77_;
   double tmp79_ = (tmp78_)*(tmp23_);
   double tmp80_ = tmp79_+tmp79_;
   double tmp81_ = (tmp80_)*(tmp23_);
   double tmp82_ = (tmp78_)*tmp24_;
   double tmp83_ = tmp81_+tmp82_;
   double tmp84_ = (tmp83_)*(tmp23_);
   double tmp85_ = (tmp78_)*tmp25_;
   double tmp86_ = tmp84_+tmp85_;
   double tmp87_ = tmp66_*tmp3_;
   double tmp88_ = mCompCoord[0];
   double tmp89_ = tmp66_*tmp5_;
   double tmp90_ = -(tmp2_);
   double tmp91_ = ElSquare(tmp48_);
   double tmp92_ = -(tmp12_);
   double tmp93_ = tmp66_*tmp9_;

  mVal[0] = (mCompCoord[1]+tmp88_*(tmp49_))-(tmp17_+(tmp18_)*(tmp65_));

  mCompDer[0][0] = tmp49_;
  mCompDer[0][1] = 1;
  mCompDer[0][2] = 0;
  mCompDer[0][3] = -(1+tmp66_*(tmp65_)+((tmp68_)*tmp50_+(tmp70_)*tmp53_+(tmp73_)*tmp56_+(tmp76_)*tmp59_+((tmp76_)*(tmp23_)+(tmp68_)*tmp26_)*tmp63_)*(tmp18_));
  mCompDer[0][4] = -(((tmp78_)*tmp50_+(tmp80_)*tmp53_+(tmp83_)*tmp56_+(tmp86_)*tmp59_+((tmp86_)*(tmp23_)+(tmp78_)*tmp26_)*tmp63_)*(tmp18_));
  mCompDer[0][5] = -((tmp23_)*(tmp18_));
  mCompDer[0][6] = -(tmp24_*(tmp18_));
  mCompDer[0][7] = -(tmp25_*(tmp18_));
  mCompDer[0][8] = -(tmp26_*(tmp18_));
  mCompDer[0][9] = -(tmp62_*(tmp18_));
  mCompDer[0][10] = (((tmp87_*tmp2_*(tmp8_)+tmp27_*(tmp14_))*(tmp48_)-(tmp33_)*((-(tmp4_)*tmp10_+tmp87_*tmp11_*tmp12_)*(tmp8_)+(tmp87_*tmp10_+tmp37_)*(tmp14_)))/tmp91_)*tmp88_;
  mCompDer[0][11] = (((tmp89_*tmp4_*(tmp8_)+tmp89_*tmp3_*(tmp14_)+tmp2_*(tmp16_))*(tmp48_)-(tmp33_)*(tmp90_*tmp4_*tmp12_*(tmp8_)+tmp90_*tmp3_*tmp12_*(tmp14_)+tmp89_*tmp12_*(tmp16_)))/tmp91_)*tmp88_;
  mCompDer[0][12] = (-((tmp33_)*((tmp92_*tmp34_+tmp93_*tmp36_)*(tmp8_)+(tmp92_*tmp4_+tmp93_*tmp41_)*(tmp14_)+tmp93_*tmp2_*(tmp16_)))/tmp91_)*tmp88_;
  mCompDer[0][13] = ((tmp66_*tmp27_*(tmp48_)-(tmp33_)*tmp66_*(tmp38_))/tmp91_)*tmp88_;
  mCompDer[0][14] = ((tmp66_*tmp29_*(tmp48_)-(tmp33_)*tmp66_*(tmp43_))/tmp91_)*tmp88_;
  mCompDer[0][15] = ((tmp89_*(tmp48_)-(tmp33_)*tmp66_*tmp46_)/tmp91_)*tmp88_;
}


void cEqAppui_X_C2MDRad5::ComputeValDerivHessian()
{
  ELISE_ASSERT(false,"Foncteur cEqAppui_X_C2MDRad5 Has no Der Sec");
}

void cEqAppui_X_C2MDRad5::SetXIm(double aVal){ mLocXIm = aVal;}
void cEqAppui_X_C2MDRad5::SetXTer(double aVal){ mLocXTer = aVal;}
void cEqAppui_X_C2MDRad5::SetYIm(double aVal){ mLocYIm = aVal;}
void cEqAppui_X_C2MDRad5::SetYTer(double aVal){ mLocYTer = aVal;}
void cEqAppui_X_C2MDRad5::SetZTer(double aVal){ mLocZTer = aVal;}



double * cEqAppui_X_C2MDRad5::AdrVarLocFromString(const std::string & aName)
{
   if (aName == "XIm") return & mLocXIm;
   if (aName == "XTer") return & mLocXTer;
   if (aName == "YIm") return & mLocYIm;
   if (aName == "YTer") return & mLocYTer;
   if (aName == "ZTer") return & mLocZTer;
   return 0;
}


cElCompiledFonc::cAutoAddEntry cEqAppui_X_C2MDRad5::mTheAuto("cEqAppui_X_C2MDRad5",cEqAppui_X_C2MDRad5::Alloc);


cElCompiledFonc *  cEqAppui_X_C2MDRad5::Alloc()
{  return new cEqAppui_X_C2MDRad5();
}

