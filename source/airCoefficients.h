/******************************************************************************
||  airCoefficients  (header file)                                           ||
||===========================================================================||
||                                                                           ||
||    Author: Gary Hammock                                                   ||
||    Creation Date:  2010-02-08                                             ||
||    Last Edit Date: 2013-05-17                                             ||
||                                                                           ||
||===========================================================================||
||  DESCRIPTION                                                              ||
||===========================================================================||
||    This library file contains the coefficients needed to evaluate the     ||
||    properties of equilibrium air for pressures between 1E-4 atm and       ||
||    1E2 atm and for temperatures between 0 K and 30000 K.                  ||
||                                                                           ||
||    The stated reference evaluates the properties in SI units.             ||
||                                                                           ||
||===========================================================================||
||  CODE REQUIREMENTS                                                        ||
||===========================================================================||
||    air.h                                                                  ||
||    air.cpp                                                                ||
||                                                                           ||
||===========================================================================||
||  REFERENCES                                                               ||
||===========================================================================||
||    Gupta, R., K. Lee, R. Thompson, J. Yos.  "Calculations and Curve Fits  ||
||        of Thermodynamic and Transport Properties for Equilibrium Air to   ||
||        30000 K".  NASA Reference Publication 1260.  October 1991.         ||
||                                                                           ||
||===========================================================================||
||  LICENSE    (MIT/X11 License)                                             ||
||===========================================================================||
||    Copyright (C) 2013 Gary Hammock                                        ||
||                                                                           ||
||    Permission is hereby granted, free of charge, to any person obtaining  ||
||    a copy of this software and associated documentation files (the        ||
||    "Software"), to deal in the Software without restriction, including    ||
||    without limitation the rights to use, copy, modify, merge, publish,    ||
||    distribute, sublicense, and/or sell copies of the Software, and to     ||
||    permit persons to whom the Software is furnished to do so, subject to  ||
||    the following conditions:                                              ||
||                                                                           ||
||    The above copyright notice and this permission notice shall be         ||
||    included in all copies or substantial portions of the Software.        ||
||                                                                           ||
||    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,        ||
||    EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF     ||
||    MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. ||
||    IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY   ||
||    CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,   ||
||    TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE      ||
||    SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.                 ||
||                                                                           ||
******************************************************************************/

/**
 *  @file airCoefficients.h
 *  @author Gary Hammock, PE
 *  @date 2013-05-16
*/

#ifndef _GH_DEF_AIR_COEFFS_H
#define _GH_DEF_AIR_COEFFS_H

///////////////////////////////////////////////////////
//  Curve Fit Coefficients for specific heat for     //
//      equilibrium air.  This table is uses both    //
//      pressure and temperature as look-up axes.    //
///////////////////////////////////////////////////////

/**********************************************************
**             Specific Enthalpy Coefficients            **
**********************************************************/
const double Air::_h_coeffs[32][5] =
{
    ///////////////////////////////////////////////////
    // Pressure ~ 10^-4 atm - (6 entries)
    /////////////////////

    //   500 <= T(K) < 2250
    { 0.128180E01,  0.121182E02,  0.424907E02, 0.665524E02,  0.385195E02 },
    //  2250 <= T(K) < 4250
    { 0.125380E02,  0.720107E02,  0.148949E03, 0.133853E03,  0.451550E02 },
    //  4250 <= T(K) < 6750
    { 0.426138E02,  0.123001E03,  0.121801E03, 0.509305E02,  0.995964E01 },
    //  6750 <= T(K) < 10750
    { 0.885088E01, -0.207380E02, -0.134604E02, 0.166408E01,  0.356570E01 },
    // 10750 <= T(K) < 17750
    { 0.151569E02, -0.713138E01, -0.172524E00, 0.643645E00,  0.356353E01 },
    // 17750 <= T(K) < 25000
    { 0.101759E02, -0.161956E02, -0.336892E01, 0.161274E02, -0.201068E01 },

    ///////////////////////////////////////////////////
    // Pressure ~ 10^-3 atm - (6 entries)
    /////////////////////

    //   500 <= T(K) < 2250
    { 0.902850E00,  0.839944E01,  0.289458E02,  0.448640E02, 0.256452E02 },
    //  2250 <= T(K) < 4250
    { 0.237222E02,  0.118014E03,  0.214780E03,  0.171168E03, 0.513939E02 },
    //  4250 <= T(K) < 6750
    { 0.880011E02,  0.213329E03,  0.181623E03,  0.661367E02, 0.110476E02 },
    //  6750 <= T(K) < 11750
    {-0.333238E02, -0.316397E02, -0.401000E01,  0.379639E01, 0.325469E01 },
    // 11750 <= T(K) < 18750
    { 0.196866E02, -0.201771E02,  0.635249E01, -0.174347E00, 0.354258E01 },
    // 18750 <= T(K) < 28000
    { 0.446869E02, -0.141086E03,  0.159412E03, -0.738595E02, 0.155141E02 },

    ///////////////////////////////////////////////////
    // Pressure ~ 10^-2 atm - (5 entries)
    /////////////////////

    //   500 <= T(K) < 2750
    { 0.653358E00,  0.596886E01,  0.201689E02,  0.309518E02, 0.174843E02 },
    //  2750 <= T(K) < 5250
    { 0.431122E01,  0.267604E02,  0.541203E02,  0.462077E02, 0.152182E02 },
    //  5250 <= T(K) < 9750
    {-0.126229E01,  0.113432E02,  0.109117E02,  0.400303E01, 0.284253E01 },
    //  9750 <= T(K) < 17750
    { 0.209845E02, -0.181381E02, -0.399635E00,  0.387388E01, 0.283981E01 },
    // 17750 <= T(K) < 30000
    { 0.268647E02, -0.104256E03,  0.145439E03, -0.846045E02, 0.212051E02 },

    ///////////////////////////////////////////////////
    // Pressure ~ 10^-1 atm - (4 entries)
    /////////////////////

    //   500 <= T(K) < 3250
    { 0.363885E00,  0.329839E01,  0.110641E02, 0.173605E02,  0.999025E01 },
    //  3250 <= T(K) < 6250
    {-0.865884E01, -0.208034E02, -0.132700E02, 0.242899E01,  0.417259E01 },
    //  6250 <= T(K) < 15250
    {-0.164319E02, -0.285858E00,  0.447878E01, 0.196275E01,  0.256061E01 },
    // 15250 <= T(K) < 30000
    {-0.207249E02,  0.633182E02, -0.678713E02, 0.312942E02, -0.158288E01 },

    ///////////////////////////////////////////////////
    // Pressure ~ 10^0 atm - (4 entries)
    /////////////////////

    //   500 <= T(K) < 3750
    { 0.209284E00,  0.187458E01,  0.622153E01,  0.101561E02,  0.603650E01 },
    //  3750 <= T(K) < 8250
    {-0.171560E02, -0.416138E02, -0.332532E02, -0.747816E01,  0.178858E01 },
    //  8250 <= T(K) < 17750
    {-0.134978E02,  0.801118E01,  0.192371E01,  0.930272E00,  0.244209E01 },
    // 17750 <= T(K) < 30000
    {-0.564265E01,  0.262889E02, -0.396119E02,  0.251297E02, -0.207198E01 },

    ///////////////////////////////////////////////////
    // Pressure ~ 10^1 atm - (4 entries)
    /////////////////////

    //   500 <= T(K) < 4250
    { 0.124937E00,  0.109286E01,  0.355163E01,  0.617946E01,  0.386028E01 },
    //  4250 <= T(K) < 9250
    {-0.120314E02, -0.229170E02, -0.129249E02,  0.262066E00,  0.235363E01 },
    //  9250 <= T(K) < 18750
    {-0.913636E01,  0.113996E02, -0.259796E01,  0.114665E01,  0.236890E01 },
    // 18750 <= T(K) < 30000
    { 0.639208E01, -0.149544E02,  0.882252E01,  0.258596E01,  0.107086E01 },

    ///////////////////////////////////////////////////
    // Pressure ~ 10^2 atm - (3 entries)
    /////////////////////

    //   500 <= T(K) < 6250
    {-0.755123E-2,  0.164258E-1,  0.366590E00,  0.210603E01, 0.195195E01 },
    //  6250 <= T(K) < 12750
    {-0.117469E01, -0.592622E01, -0.214181E01,  0.251111E01, 0.212013E01 },
    // 12750 <= T(K) < 30000
    {-0.245329E01,  0.371340E01, -0.288683E00,  0.421200E00, 0.239842E01 }
};

/**********************************************************
**             Specific Heat Coefficients                **
**********************************************************/
const double Air::_cp_coeffs[52][5] =
{
    ///////////////////////////////////////////////////
    // Pressure ~ 10^-4 atm - (9 entries)
    /////////////////////

    //   500 <= T(K) < 1250
    { 0.349023E00,  0.344158E01,  0.126715E02,  0.208154E02,  0.116592E02 },
    //  1250 <= T(K) < 1750
    { 0.152264E02,  0.129277E03,  0.411057E03,  0.580300E03,  0.305728E03 },
    //  1750 <= T(K) < 2750
    {-0.159675E02, -0.136508E03, -0.411657E03, -0.525250E03, -0.241298E03 },
    //  2750 <= T(K) < 4750
    {-0.108293E03, -0.515276E03, -0.882748E03, -0.642505E03, -0.166628E03 },
    //  4750 <= T(K) < 6250
    {-0.116246E04, -0.266973E04, -0.221802E04, -0.791376E03, -0.102433E03 },
    //  6250 <= T(K) < 9750
    {-0.238707E02, -0.104336E03, -0.890658E02, -0.182697E02,  0.138792E01 },
    //  9750 <= T(K) < 14250
    {-0.209557E02,  0.253228E02,  0.212355E02, -0.128857E02,  0.135712E01 },
    // 14250 <= T(K) < 19750
    { 0.762671E03, -0.167407E04,  0.130713E04, -0.422349E03,  0.482128E02 },
    // 19750 <= T(K) < 25000
    {-0.789820E03,  0.263864E04, -0.326378E04,  0.176381E04, -0.348874E03 },

    ///////////////////////////////////////////////////
    // Pressure ~ 10^-3 atm - (8 entries)
    /////////////////////

    //   500 <= T(K) < 1250
    { 0.199532E00,  0.192597E01,  0.694347E01,  0.112521E02,  0.570825E01 },
    //  1250 <= T(K) < 2250
    { 0.345376E01,  0.315624E02,  0.107177E03,  0.160585E03,  0.884544E02 },
    //  2250 <= T(K) < 3750
    {-0.369572E02, -0.128366E03, -0.129698E03, -0.169299E02,  0.207647E02 },
    //  3750 <= T(K) < 5250
    {-0.146237E03, -0.581296E03, -0.848597E03, -0.532403E03, -0.119389E03 },
    //  5250 <= T(K) < 7250
    {-0.758521E03, -0.139794E04, -0.900003E03, -0.238528E03, -0.216169E02 },
    //  7250 <= T(K) < 10750
    {-0.330240E02, -0.866157E02, -0.489572E02, -0.182071E01,  0.229104E01 },
    // 10750 <= T(K) < 17250
    {-0.618098E02,  0.103127E03, -0.262275E02, -0.850086E01,  0.253250E01 },
    // 17250 <= T(K) < 28000
    { 0.125063E03, -0.298121E03,  0.210795E03, -0.295269E02, -0.792067E01 },

    ///////////////////////////////////////////////////
    // Pressure ~ 10^-2 atm - (7 entries)
    /////////////////////

    //   500 <= T(K) < 1750
    { 0.669436E00,  0.644478E01,  0.230631E02,  0.365225E02,  0.203928E02 },
    //  1750 <= T(K) < 2750
    {-0.453138E02, -0.292666E03, -0.699603E03, -0.730849E03, -0.281133E03 },
    //  2750 <= T(K) < 4750
    {-0.151035E03, -0.591051E03, -0.835692E03, -0.502696E03, -0.107793E03 },
    //  4750 <= T(K) < 6750
    { 0.539167E03,  0.126894E04,  0.106221E04,  0.370582E03,  0.457650E02 },
    //  6750 <= T(K) < 12750
    { 0.217707E02, -0.450370E02, -0.192634E02,  0.517928E01,  0.180195E01 },
    // 12750 <= T(K) < 19750
    {-0.122810E03,  0.240030E03, -0.138486E03,  0.225676E02,  0.100733E01 },
    // 19750 <= T(K) < 30000
    { 0.162348E03, -0.497482E03,  0.525270E03, -0.216688E03,  0.277132E02 },

    ///////////////////////////////////////////////////
    // Pressure ~ 10^-1 atm - (8 entries)
    /////////////////////

    //   500 <= T(K) < 1750
    { 0.291577E00,  0.278787E01,  0.992221E01,  0.157475E02,  0.820277E01 },
    //  1750 <= T(K) < 2750
    {-0.662937E01, -0.382984E02, -0.779456E02, -0.627915E02, -0.154364E02 },
    //  2750 <= T(K) < 4250
    { 0.128388E03,  0.596922E03,  0.101945E04,  0.757047E03,  0.205793E03 },
    //  4250 <= T(K) < 6750
    {-0.296048E02, -0.133243E03, -0.187832E03, -0.100614E03, -0.168003E02 },
    //  6750 <= T(K) < 9750
    {-0.308894E03, -0.267701E03, -0.478605E02,  0.326629E01,  0.838365E00 },
    //  9750 <= T(K) < 15750
    { 0.104767E03, -0.105447E03,  0.127166E02,  0.595868E01,  0.821623E00 },
    // 15750 <= T(K) < 21500
    {-0.188079E03,  0.472158E03, -0.407311E03,  0.141182E03, -0.156018E02 },
    // 21500 <= T(K) < 30000
    { 0.232697E03, -0.869061E03,  0.117775E04, -0.682883E03,  0.143551E03 },

    ///////////////////////////////////////////////////
    // Pressure ~ 10^0 atm - (7 entries)
    /////////////////////

    //   500 <= T(K) < 1750
    { 0.164992E00,  0.156336E01,  0.552429E01,  0.879873E01,  0.412806E01 },
    //  1750 <= T(K) < 3250
    {-0.830572E01, -0.483112E02, -0.101598E03, -0.897230E02, -0.280651E02 },
    //  3250 <= T(K) < 4750
    { 0.848335E02,  0.361629E03,  0.561712E03,  0.376565E03,  0.915792E02 },
    //  4750 <= T(K) < 7750
    {-0.945467E01, -0.640807E02, -0.893740E02, -0.403342E02, -0.458728E01 },
    //  7750 <= T(K) < 11750
    {-0.153176E03, -0.476111E02,  0.217674E02,  0.314736E01,  0.922570E-1 },
    // 11750 <= T(K) < 20500
    { 0.975058E02, -0.158721E03,  0.753693E02, -0.936668E01,  0.987515E00 },
    // 20500 <= T(K) < 30000
    {-0.473648E02,  0.818135E02,  0.169726E02, -0.836769E02,  0.339060E02 },

    ///////////////////////////////////////////////////
    // Pressure ~ 10^1 atm - (7 entries)
    /////////////////////

    //   500 <= T(K) < 1750
    { 0.111751E00,  0.105018E01,  0.368846E01,  0.591074E01,  0.244269E01 },
    //  1750 <= T(K) < 3250
    { 0.252675E00,  0.341131E01,  0.131529E02,  0.203259E02,  0.100197E02 },
    //  3250 <= T(K) < 5750
    { 0.450386E02,  0.167261E03,  0.224425E03,  0.128924E03,  0.263694E02 },
    //  5750 <= T(K) < 9250
    { 0.231376E02, -0.104484E01, -0.271807E02, -0.102436E02, -0.333185E-1 },
    //  9250 <= T(K) < 13750
    {-0.799940E02,  0.170114E02,  0.187072E02, -0.350311E01,  0.184168E00 },
    // 13750 <= T(K) < 22500
    { 0.491689E02, -0.116351E03,  0.889977E02, -0.242638E02,  0.263659E01 },
    // 22500 <= T(K) < 30000
    {-0.253231E03,  0.955890E03, -0.132457E04,  0.798459E03, -0.175990E03 },

    ///////////////////////////////////////////////////
    // Pressure ~ 10^2 atm - (6 entries)
    /////////////////////

    //   500 <= T(K) < 1750
    { 0.986591E-1,  0.923581E00,  0.323392E01,  0.519284E01, 0.202191E01 },
    //  1750 <= T(K) < 3750
    { 0.974261E-1,  0.146776E01,  0.575473E01,  0.896935E01, 0.384233E01 },
    //  3750 <= T(K) < 6750
    { 0.210207E02,  0.677318E02,  0.778089E02,  0.381171E02, 0.628850E01 },
    //  6750 <= T(K) < 10750
    { 0.143729E02, -0.128820E02, -0.173603E02, -0.137585E01, 0.743313E00 },
    // 10750 <= T(K) < 17750
    {-0.347606E02,  0.320177E02,  0.148249E01, -0.510951E01, 0.877002E00 },
    // 17750 <= T(K) < 30000
    { 0.450529E02, -0.143364E03,  0.161302E03, -0.752038E02, 0.129598E02 }
};

/**********************************************************
**          Thermal Conductivity Coefficients            **
**********************************************************/
const double Air::_k_coeffs[42][5] =
{
    ///////////////////////////////////////////////////
    // Pressure ~ 10^-4 atm - (7 entries)
    /////////////////////

    //   500 <= T(K) < 1750
    { 0.395299E01,  0.386816E02,  0.140687E03,  0.226110E03,  0.127138E03 },
    //  1750 <= T(K) < 2750
    { 0.119879E02,  0.412181E02,  0.717156E01, -0.911924E02, -0.810415E02 },
    //  2750 <= T(K) < 4750
    {-0.832682E02, -0.419438E03, -0.751764E03, -0.566912E03, -0.157470E03 },
    //  4750 <= T(K) < 6250
    {-0.103603E04, -0.242470E04, -0.206135E04, -0.757541E03, -0.108281E03 },
    //  6250 <= T(K) < 10250
    { 0.261125E02,  0.411940E01, -0.186054E02, -0.645054E01, -0.621476E01 },
    // 10250 <= T(K) < 17750
    { 0.246095E02, -0.507490E02,  0.369131E02, -0.897288E01, -0.623025E01 },
    // 17750 <= T(K) < 25000
    {-0.571805E02,  0.168628E03, -0.181577E03,  0.859388E02, -0.213335E02 },

    ///////////////////////////////////////////////////
    // Pressure ~ 10^-3 atm - (7 entries)
    /////////////////////

    //   500 <= T(K) < 1750
    { 0.199665E01,  0.194822E02,  0.706404E02,  0.113538E03,  0.599079E02 },
    //  1750 <= T(K) < 2750
    {-0.831120E02, -0.560438E03, -0.140314E04, -0.154128E04, -0.632398E03 },
    //  2750 <= T(K) < 4750
    {-0.110139E03, -0.481050E03, -0.757873E03, -0.505860E03, -0.125800E03 },
    //  4750 <= T(K) < 6250
    { 0.299875E03,  0.923042E03,  0.992814E03,  0.442621E03,  0.634709E02 },
    //  6250 <= T(K) < 11250
    { 0.434485E02,  0.464790E01, -0.155778E02, -0.220224E01, -0.558790E01 },
    // 11250 <= T(K) < 18250
    { 0.895136E01, -0.322183E02,  0.350726E02, -0.129798E02, -0.498154E01 },
    // 18250 <= T(K) < 28000
    {-0.422029E02,  0.144838E03, -0.182586E03,  0.101698E03, -0.270417E02 },

    ///////////////////////////////////////////////////
    // Pressure ~ 10^-2 atm - (7 entries)
    /////////////////////

    //   500 <= T(K) < 2250
    { 0.198558E01,  0.189164E02,  0.668384E02,  0.104546E03,  0.527822E02 },
    //  2250 <= T(K) < 3250
    { 0.595832E02,  0.288748E03,  0.500756E03,  0.363789E03,  0.844428E02 },
    //  3250 <= T(K) < 5750
    {-0.442143E02, -0.206207E03, -0.324643E03, -0.204871E03, -0.494556E02 },
    //  5750 <= T(K) < 7750
    {-0.584437E03, -0.873106E03, -0.445088E03, -0.927269E02, -0.128529E02 },
    //  7750 <= T(K) < 12750
    { 0.373716E02, -0.115449E02, -0.113653E02,  0.135799E01, -0.542822E01 },
    // 12750 <= T(K) < 18750
    {-0.143675E02,  0.801073E01,  0.146420E02, -0.117248E02, -0.389761E01 },
    // 18750 <= T(K) < 30000
    { 0.502985E01, -0.960227E01,  0.196818E01,  0.643952E01, -0.896353E01 },

    ///////////////////////////////////////////////////
    // Pressure ~ 10^-1 atm - (6 entries)
    /////////////////////

    //   500 <= T(K) < 2250
    { 0.105928E01,  0.100924E02,  0.356709E02,  0.561818E02,  0.249670E02 },
    //  2250 <= T(K) < 4250
    { 0.101351E03,  0.490653E03,  0.868620E03,  0.666792E03,  0.180596E03 },
    //  4250 <= T(K) < 6750
    { 0.830640E01, -0.324274E02, -0.942568E02, -0.647282E02, -0.180857E02 },
    //  6750 <= T(K) < 9250
    {-0.318301E03, -0.306306E03, -0.782124E02, -0.466313E01, -0.585083E01 },
    //  9250 <= T(K) < 16750
    { 0.469099E02, -0.330961E02, -0.146607E01,  0.306898E01, -0.562490E01 },
    // 16750 <= T(K) < 30000
    { 0.154279E02, -0.541310E02,  0.693640E02, -0.366810E02,  0.115271E01 },

    ///////////////////////////////////////////////////
    // Pressure ~ 10^0 atm - (6 entries)
    /////////////////////

    //   500 <= T(K) < 2250
    { 0.334316E00,  0.328202E01,  0.119939E02,  0.200944E02,  0.462882E01 },
    //  2250 <= T(K) < 4250
    { 0.109992E02,  0.387106E02,  0.387282E02,  0.548304E01, -0.120106E02 },
    //  4250 <= T(K) < 7750
    { 0.124072E02, -0.147438E02, -0.530293E02, -0.299886E02, -0.961485E01 },
    //  7750 <= T(K) < 10750
    {-0.189644E03, -0.828711E02,  0.998789E01,  0.227739E01, -0.581069E01 },
    // 10750 <= T(K) < 19250
    { 0.298795E02, -0.381078E02,  0.117041E02,  0.122011E01, -0.578171E01 },
    // 19250 <= T(K) < 30000
    { 0.844897E01, -0.358117E02,  0.553921E02, -0.353787E02,  0.274595E01 },

    ///////////////////////////////////////////////////
    // Pressure ~ 10^1 atm - (5 entries)
    /////////////////////

    //   500 <= T(K) < 3250
    { 0.413573E00,  0.383393E01,  0.131885E02,  0.207305E02,  0.427728E01 },
    //  3250 <= T(K) < 5250
    { 0.821184E02,  0.308927E03,  0.423174E03,  0.250668E03,  0.475889E02 },
    //  5250 <= T(K) < 8750
    { 0.113875E02, -0.133907E02, -0.337860E02, -0.122339E02, -0.610064E01 },
    //  8750 <= T(K) < 13750
    {-0.723261E02,  0.143656E02,  0.135247E02, -0.233991E01, -0.556444E01 },
    // 13750 <= T(K) < 30000
    {-0.382696E01,  0.146502E02, -0.187337E02,  0.107119E02, -0.717162E01 },

    ///////////////////////////////////////////////////
    // Pressure ~ 10^2 atm - (4 entries)
    /////////////////////

    //   500 <= T(K) < 3750
    { 0.208749E00,  0.192122E01,  0.658813E01,  0.107630E02, -0.127699E01 },
    //  3750 <= T(K) < 6250
    { 0.378677E02,  0.123284E03,  0.144224E03,  0.728083E02,  0.684807E01 },
    //  6250 <= T(K) < 10750
    { 0.223116E02,  0.336369E00, -0.142705E02, -0.134534E01, -0.498832E01 },
    // 10750 <= T(K) < 30000
    { 0.792550E01, -0.216552E02,  0.204578E02, -0.597164E01, -0.485454E01 }
};

/**********************************************************
**          Dynamic Viscosity Coefficients             **
**********************************************************/
const double Air::_mu_coeffs[24][6] =
{
    ///////////////////////////////////////////////////
    // Pressure ~ 10^-4 atm - (4 entries)
    /////////////////////

    //   500 <= T(K) < 7750
    {-0.1160076E-4,  0.6656010E-3, -0.2933969E-3,
                     0.7427050E-4, -0.6456605E-5,  0.8752161E-7 },
    //  7750 <= T(K) < 10750
    {-0.9105422E00,  0.4949794E00, -0.1060568E00,
                     0.1123425E-1, -0.5896774E-3,  0.1229026E-4 },
    // 10750 <= T(K) < 16750
    { 0.1463029E-1, -0.5019958E-2,  0.6886543E-3,
                    -0.4723839E-4,  0.1623374E-5, -0.2239581E-7 },
    // 16750 <= T(K) < 25000
    {-0.2140374E-2,  0.6529285E-3, -0.7290226E-4,
                     0.3865996E-5, -0.9908122E-7,  0.9916638E-9 },

    ///////////////////////////////////////////////////
    // Pressure ~ 10^-3 atm - (4 entries)
    /////////////////////

    //   500 <= T(K) < 8250
    { 0.2397194E-4,  0.5564725E-3, -0.1970968E-3,
                     0.4272210E-4, -0.2690853E-5, -0.3009241E-7 },
    //  8250 <= T(K) < 12250
    {-0.5784272E00,  0.2816531E00, -0.5377449E-1,
                     0.5058384E-2, -0.2352317E-3,  0.4336410E-5 },
    // 12250 <= T(K) < 18750
    { 0.1658118E-1, -0.5027652E-2,  0.6106363E-3,
                    -0.3715711E-4,  0.1135683E-5, -0.1397984E-7 },
    // 18750 <= T(K) < 28000
    { 0.6903134E-2, -0.1345295E-2,  0.1061916E-3,
                    -0.4234384E-5,  0.8514686E-7, -0.6893227E-9 },

    ///////////////////////////////////////////////////
    // Pressure ~ 10^-2 atm - (4 entries)
    /////////////////////

    //   500 <= T(K) < 8750
    { 0.5085043E-4,  0.4774840E-3, -0.1322133E-3,
                     0.2362256E-4, -0.8014978E-6, -0.6458338E-7 },
    //  8750 <= T(K) < 14250
    {-0.3414870E00,  0.1473594E00, -0.2471167E-1,
                     0.2030404E-2, -0.8216415E-4,  0.1314540E-5 },
    // 14250 <= T(K) < 19750
    { 0.2450600E-1, -0.6697224E-2,  0.7362709E-3,
                    -0.4070960E-4,  0.1134307E-5, -0.1276018E-7 },
    // 19750 <= T(K) < 30000
    {-0.3561146E-1,  0.7255623E-2, -0.5837678E-3,
                     0.2324839E-4, -0.4590857E-6,  0.3600777E-8 },

    ///////////////////////////////////////////////////
    // Pressure ~ 10^-1 atm - (4 entries)
    /////////////////////

    //   500 <= T(K) < 9750
    { 0.6394112E-4, 0.4385020E-3, -0.1024141E-3,
                    0.1654305E-4, -0.5014106E-6, -0.3710875E-7 },
    //  9750 <= T(K) < 16750
    {-0.2376368E00, 0.9006170E-1, -0.1315352E-1,
                    0.9370344E-3, -0.3279124E-4,  0.4529650E-6 },
    // 16750 <= T(K) < 24500
    { 0.6309492E-3, 0.6108099E-3, -0.1286661E-3,
                    0.9381977E-5, -0.2960969E-6,  0.3444222E-8 },
    // 24500 <= T(K) < 30000
    {-0.1622687E01, 0.3035173E00, -0.2266401E-1,
                    0.8445985E-3, -0.1570909E-4,  0.1166667E-6 },

    ///////////////////////////////////////////////////
    // Pressure ~ 10^0 atm - (3 entries)
    /////////////////////

    //   500 <= T(K) < 11250
    { 0.5781887E-4,  0.4438221E-3, -0.1020840E-3,
                     0.1688754E-4, -0.8622324E-6, -0.2239193E-9 },
    // 11250 <= T(K) < 19750
    {-0.1844238E00,  0.6040101E-1, -0.7566737E-2,
                     0.4609058E-3, -0.1377229E-4,  0.1623637E-6 },
    // 19750 <= T(K) < 30000
    { 0.2606784E-1, -0.4562535E-2,  0.3111533E-3,
                    -0.1018512E-4,  0.1576999E-6, -0.9011456E-9 },

    ///////////////////////////////////////////////////
    // Pressure ~ 10^1 atm - (3 entries)
    /////////////////////

    //   500 <= T(K) < 12750
    { 0.7256455E-4,  0.4050530E-3, -0.7626766E-4,
                     0.1114437E-4, -0.5020411E-6,  0.7074486E-10 },
    // 12750 <= T(K) < 21500
    {-0.9524274E-1,  0.2589951E-1, -0.2593217E-2,
                     0.1227975E-3, -0.2772500E-5,  0.2383398E-7 },
    // 21500 <= T(K) < 30000
    { 0.5037513E-1, -0.8081647E-2,  0.5209350E-3,
                    -0.1682098E-4,  0.2731352E-6, -0.1794872E-8 },

    ///////////////////////////////////////////////////
    // Pressure ~ 10^2 atm - (2 entries)
    /////////////////////

    //   500 <= T(K) < 15250
    { 0.7609039E-4, 0.3891948E-3, -0.6458779E-4,
                    0.8791566E-5, -0.4216496E-6, 0.4509800E-8 },
    // 15250 <= T(K) < 30000
    {-0.7868582E-1, 0.1820922E-1, -0.1543467E-2,
                    0.6257766E-4, -0.1234998E-5, 0.9579999E-8 }
};

/**********************************************************
**            Compressibility Coefficients               **
**********************************************************/
const double Air::_z_coeffs[32][5] =
{
    ///////////////////////////////////////////////////
    // Pressure ~ 10^-4 atm - (5 entries)
    /////////////////////

    //   500 <= T(K) < 2750
    { 0.710750E00,  0.107229E01, -0.125673E01,  0.564944E00, -0.822333E-1 },
    //  2750 <= T(K) < 5750
    {-0.614415E01,  0.861656E01, -0.370256E01,  0.681208E00, -0.443045E-1 },
    //  5750 <= T(K) < 8750
    {-0.632086E02,  0.370722E02, -0.776456E01,  0.706484E00, -0.233636E-1 },
    //  8750 <= T(K) < 17750
    {-0.467833E02,  0.139011E02, -0.138693E01,  0.592861E-1, -0.903887E-3 },
    // 17750 <= T(K) < 25000
    { 0.556705E02, -0.135009E02,  0.118386E01, -0.427210E-1,  0.551468E-3 },

    ///////////////////////////////////////////////////
    // Pressure ~ 10^-3 atm - (5 entries)
    /////////////////////

    //   500 <= T(K) < 3250
    { 0.824286E00,  0.625098E00, -0.689867E00,  0.286982E00, -0.376727E-1 },
    //  3250 <= T(K) < 6750
    { 0.746758E01, -0.460729E01,  0.109594E01, -0.898428E-1,  0.162238E-2 },
    //  6750 <= T(K) < 9750
    {-0.385889E02,  0.209649E02, -0.398276E01,  0.327436E00, -0.970559E-2 },
    //  9750 <= T(K) < 19750
    {-0.455262E02,  0.121138E02, -0.108251E01,  0.415356E-1, -0.569596E-3 },
    // 19750 <= T(K) < 28000
    { 0.809623E02, -0.162146E02,  0.120105E01, -0.375039E-1,  0.424122E-3 },

    ///////////////////////////////////////////////////
    // Pressure ~ 10^-2 atm - (5 entries)
    /////////////////////

    //   500 <= T(K) < 3250
    { 0.873086E00,  0.434929E00, -0.454400E00,  0.176448E00, -0.212727E-1 },
    //  3250 <= T(K) < 7250
    {-0.195828E01,  0.324383E01, -0.123210E01,  0.198816E00, -0.110471E-1 },
    //  7250 <= T(K) < 11750
    {-0.417508E02,  0.199010E02, -0.334091E01,  0.243749E00, -0.644569E-2 },
    // 11750 <= T(K) < 21500
    {-0.431463E02,  0.101757E02, -0.804882E00,  0.274096E-1, -0.334336E-3 },
    // 21500 <= T(K) < 30000
    { 0.208036E03, -0.342626E02,  0.210825E01, -0.563525E-1,  0.555405E-3 },

    ///////////////////////////////////////////////////
    // Pressure ~ 10^-1 atm - (5 entries)
    /////////////////////

    //   500 <= T(K) < 3750
    { 0.904213E00,  0.311295E00, -0.302086E00,  0.107468E00, -0.116924E-1 },
    //  3750 <= T(K) < 8250
    { 0.124751E01,  0.485004E00, -0.321087E00,  0.632573E-1, -0.364522E-2 },
    //  8250 <= T(K) < 13750
    {-0.325326E02,  0.137742E02, -0.203163E01,  0.130377E00, -0.302863E-2 },
    // 13750 <= T(K) < 23500
    {-0.428667E02,  0.888031E01, -0.620696E00,  0.188157E-1, -0.206237E-3 },
    // 23500 <= T(K) < 30000
    { 0.217096E03, -0.309522E02,  0.165245E01, -0.384201E-1,  0.330019E-3 },

    ///////////////////////////////////////////////////
    // Pressure ~ 10^0 atm - (5 entries)
    /////////////////////

    //   500 <= T(K) < 5750
    { 0.102671E01, -0.465274E-1,  0.972123E-2,  0.417402E-2, -0.536830E-3 },
    //  5750 <= T(K) < 9250
    { 0.387376E02, -0.204439E02,  0.404607E01, -0.344141E00,  0.107287E-1 },
    //  9250 <= T(K) < 15750
    {-0.161621E02,  0.637080E01, -0.827695E00,  0.466769E-1, -0.941988E-3 },
    // 15750 <= T(K) < 23500
    {-0.255245E02,  0.419968E01, -0.208573E00,  0.395832E-2, -0.175392E-4 },
    // 23500 <= T(K) < 30000
    {-0.784807E02,  0.129796E02, -0.758996E00,  0.194343E-1, -0.182292E-3 },

    ///////////////////////////////////////////////////
    // Pressure ~ 10^1 atm - (4 entries)
    /////////////////////

    //   500 <= T(K) < 5750
    { 0.970875E00,  0.869030E-1, -0.737745E-1,  0.218303E-1, -0.179762E-2 },
    //  5750 <= T(K) < 9750
    {-0.100200E01,  0.186655E01, -0.540958E00,  0.639254E-1, -0.255478E-2 },
    //  9750 <= T(K) < 17250
    {-0.993188E01,  0.353080E01, -0.389667E00,  0.187431E-1, -0.320898E-3 },
    // 17250 <= T(K) < 30000
    { 0.398457E-1, -0.612253E00,  0.997312E-1, -0.411847E-2,  0.542207E-4 },

    ///////////////////////////////////////////////////
    // Pressure ~ 10^2 atm - (3 entries)
    /////////////////////

    //   500 <= T(K) < 8750
    { 0.103304E01, -0.585872E-1,  0.237877E-1, -0.281715E-2,  0.168221E-3 },
    //  8750 <= T(K) < 17750
    {-0.555015E01,  0.157079E01, -0.115055E00,  0.324023E-2, -0.188832E-4 },
    // 17750 <= T(K) < 30000
    { 0.202955E02, -0.323532E01,  0.203092E00, -0.525620E-2,  0.489857E-4 }
};

#endif