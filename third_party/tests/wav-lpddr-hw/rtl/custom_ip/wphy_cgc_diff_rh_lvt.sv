/*********************************************************************************
Copyright (c) 2021 Wavious LLC

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.

*********************************************************************************/

`ifdef SYNTHESIS
`else 
// AMS netlist generated by the AMS Unified netlister
// IC subversion:  IC6.1.8-64b.500.14 
// Xcelium version: 20.09-s001
// Copyright(C) 2005-2009, Cadence Design Systems, Inc
// User: shadzibabic Pid: 15762
// Design library name: wphy_gf12lp_ips_sim_lib
// Design cell name: wphy_cgc_diff_rh_lvt_tb
// Design view name: config_vlog
// Solver: Spectre



// Library - wphy_gf12lp_ips_lib, Cell - wphy_cgc_diff_rh_lvt, View -
//schematic
// LAST TIME SAVED: Sep 17 20:49:27 2020
// NETLIST TIME: Oct 27 00:49:51 2020
`timescale 1ps / 1ps 




 

`endif //SYNTHESIS 
module wphy_cgc_diff_rh_lvt (o_clk, o_clk_b, ena, i_clk, 
    i_clk_b
`ifdef WLOGIC_NO_PG 
`else  
 ,vdd
 ,vss 
`endif //WLOGIC_NO_PG 
);

`ifdef WLOGIC_NO_PG
wire vdd;
assign vdd=1'b1;
wire vss;
assign vss=1'b0;
`else
inout vdd;
inout vss;
`endif


output  o_clk, o_clk_b;


input  ena, i_clk, i_clk_b;

`ifdef SYNTHESIS
`else 

wphy_cgc_diff_rh_lvt_INVT_D2_GL16_LVT INVT0 ( .out(ckbb), .en(en), .enb(enb), .vss(vss), 
    .in(i_clk_b), .vdd(vdd));

wphy_cgc_diff_rh_lvt_INVT_D2_GL16_LVT INVT1 ( .out(ckb), .en(en), .enb(enb), .vss(vss), 
    .in(i_clk), .vdd(vdd));

wphy_cgc_diff_rh_lvt_LAT_D1_GL16_LVT LA0 ( .tielo(tielo), .vss(vss), .vdd(vdd), 
    .tiehi(tiehi), .d(net012), .clkb(i_clk), .clk(i_clk_b), .q(enb));

wphy_cgc_diff_rh_lvt_PD_D1_GL16_LVT PD0 ( .vss(vss), .enb(enb), .y(ckb));

wphy_cgc_diff_rh_lvt_TIEHI_D2_GL16_LVT I0 ( .tiehi(tiehi), .vss(vss), .vdd(vdd));

wphy_cgc_diff_rh_lvt_INV_D2_GL16_LVT INV3 ( .in(ena), .vss(vss), .out(net012), .vdd(vdd));

wphy_cgc_diff_rh_lvt_INV_D2_GL16_LVT INV1_1 ( .in(ckbb), .vss(vss), .out(o_clk_b), 
    .vdd(vdd));

wphy_cgc_diff_rh_lvt_INV_D2_GL16_LVT INV1_0 ( .in(ckbb), .vss(vss), .out(o_clk_b), 
    .vdd(vdd));

wphy_cgc_diff_rh_lvt_INV_D2_GL16_LVT INV0 ( .in(enb), .vss(vss), .out(en), .vdd(vdd));

wphy_cgc_diff_rh_lvt_INV_D2_GL16_LVT INV2_1 ( .in(ckb), .vss(vss), .out(o_clk), .vdd(vdd));

wphy_cgc_diff_rh_lvt_INV_D2_GL16_LVT INV2_0 ( .in(ckb), .vss(vss), .out(o_clk), .vdd(vdd));

wphy_cgc_diff_rh_lvt_TIELO_D2_GL16_LVT I1 ( .tielo(tielo), .vss(vss), .vdd(vdd));

wphy_cgc_diff_rh_lvt_PU_D1_GL16_LVT PU0 ( .vdd(vdd), .en(en), .y(ckbb));

`endif //SYNTHESIS 
endmodule
`ifdef SYNTHESIS
`else
// Library - wphy_gf12lp_ips_sim_lib, Cell - wphy_cgc_diff_rh_lvt_tb,
//View - schematic
// LAST TIME SAVED: Oct 26 11:52:01 2020
// NETLIST TIME: Oct 27 00:49:51 2020
`timescale 1ps / 1ps 




 




 // END AMS-UNL Netlist

//systemVerilog HDL for "wavshared_tsmc12ffc_lib", "wphy_cgc_diff_rh_lvt_PU_D1_GL16_LVT" "systemVerilog"


module wphy_cgc_diff_rh_lvt_PU_D1_GL16_LVT ( en, y
`ifdef WLOGIC_MODEL_NO_PG
`else
, vdd 
`endif //WLOGIC_MODEL_NO_PG
);

  input y;
  input en;
`ifdef WLOGIC_MODEL_NO_PG
`else
  inout vdd;
`endif //WLOGIC_MODEL_NO_PG

`ifdef WLOGIC_MODEL_NO_PG
`else

`ifdef WLOGIC_MODEL_PWR_CHECK
  wire   power_ok;
  assign power_ok = vdd;
  
  assign y = (power_ok) ? 1'bz : 1'bx;

`endif //WLOGIC_MODEL_PWR_CHECK

`endif //WLOGIC_MODEL_NO_PG

 assign y = en ? 1'bz : 1'b1;

endmodule
//systemVerilog HDL for "wavshared_ln08lpu_dig_lib", "wphy_cgc_diff_rh_lvt_TIELO_D2_GL16_LVT" "systemVerilog"


module wphy_cgc_diff_rh_lvt_TIELO_D2_GL16_LVT ( tielo
`ifdef WLOGIC_MODEL_NO_PG
`else
, vss, vdd
`endif //WLOGIC_MODEL_NO_PG
);

  output tielo;
`ifdef WLOGIC_MODEL_NO_PG
`else
  inout vdd;
  inout vss;
`endif //WLOGIC_MODEL_NO_PG

`ifdef WLOGIC_MODEL_NO_PG
`else

`ifdef WLOGIC_MODEL_PWR_CHECK
  wire   power_ok;
  assign power_ok = ~vss & vdd;

  assign tielo = (power_ok) ? 1'bz : 1'bx;

`endif //WLOGIC_MODEL_PWR_CHECK

`endif //WLOGIC_MODEL_NO_PG

  assign tielo =  1'b0 ;


endmodule
//systemVerilog HDL for "wavshared_tsmc12ffc_lib", "wphy_cgc_diff_rh_lvt_INV_D2_GL16_LVT" "systemVerilog"

`timescale 1ps/1ps

module wphy_cgc_diff_rh_lvt_INV_D2_GL16_LVT( in, out
`ifdef WLOGIC_MODEL_NO_PG
`else
, vdd, vss
`endif //WLOGIC_MODEL_NO_PG
);

  input in;
  output out;
`ifdef WLOGIC_MODEL_NO_PG
`else
  inout vdd;
  inout vss;
`endif //WLOGIC_MODEL_NO_PG

`ifdef WLOGIC_MODEL_NO_PG
`else

`ifdef WLOGIC_MODEL_PWR_CHECK
  wire   power_ok;
  assign power_ok = ~vss & vdd;
  
  assign out = (power_ok) ? 1'bz : 1'bx;

`endif //WLOGIC_MODEL_PWR_CHECK

`endif //WLOGIC_MODEL_NO_PG

    assign  out = ~in;

endmodule
//systemVerilog HDL for "wavshared_ln08lpu_dig_lib", "wphy_cgc_diff_rh_lvt_TIEHI_D2_GL16_LVT" "systemVerilog"


module wphy_cgc_diff_rh_lvt_TIEHI_D2_GL16_LVT ( tiehi
`ifdef WLOGIC_MODEL_NO_PG
`else
, vss, vdd 
`endif //WLOGIC_MODEL_NO_PG
);

  output tiehi;
`ifdef WLOGIC_MODEL_NO_PG
`else
  inout vdd;
  inout vss;
`endif //WLOGIC_MODEL_NO_PG

`ifdef WLOGIC_MODEL_NO_PG
`else

`ifdef WLOGIC_MODEL_PWR_CHECK
  wire   power_ok;
  assign power_ok = ~vss & vdd;
  
  assign tiehi = (power_ok) ? 1'bz : 1'bx;

`endif //WLOGIC_MODEL_PWR_CHECK

`endif //WLOGIC_MODEL_NO_PG

  assign tiehi =  1'b1 ;

endmodule
//systemVerilog HDL for "wavshared_tsmc12ffc_lib", "wphy_cgc_diff_rh_lvt_PD_D1_GL16_LVT" "systemVerilog"

module wphy_cgc_diff_rh_lvt_PD_D1_GL16_LVT( enb, y
`ifdef WLOGIC_MODEL_NO_PG
`else
, vss
`endif //WLOGIC_MODEL_NO_PG
); 

  input y;
  input enb;

`ifdef WLOGIC_MODEL_NO_PG
`else
  inout vss;
`endif //WLOGIC_MODEL_NO_PG

`ifdef WLOGIC_MODEL_NO_PG
`else

`ifdef WLOGIC_MODEL_PWR_CHECK
  wire   power_ok;
  assign power_ok = ~vss ;
  
  assign y = (power_ok) ? 1'bz : 1'bx;

`endif //WLOGIC_MODEL_PWR_CHECK

`endif //WLOGIC_MODEL_NO_PG

  assign y =  enb ? 1'b0 : 1'bz;

endmodule
//systemVerilog HDL for "wavshared_tsmc12ffc_lib", "wphy_cgc_diff_rh_lvt_LAT_D1_GL16_LVT" "systemVerilog"

`timescale 1ps/1ps
module wphy_cgc_diff_rh_lvt_LAT_D1_GL16_LVT( q, clk, clkb, d
`ifdef WLOGIC_MODEL_NO_TIE
`else
, tiehi, tielo
`endif //WLOGIC_MODEL_NO_TIE
`ifdef WLOGIC_MODEL_NO_PG
`else
, vss, vdd 
`endif //WLOGIC_MODEL_NO_PG
); 
 
  input clk;
  output q;  
  input d;
  input clkb;
`ifdef WLOGIC_MODEL_NO_TIE
`else
  input tiehi;
  input tielo;
`endif //WLOGIC_MODEL_NO_TIE
`ifdef WLOGIC_MODEL_NO_PG
`else
  inout vdd;
  inout vss;
`endif //WLOGIC_MODEL_NO_PG


  wire #0 polarity_ok = clk^clkb;

`ifdef WLOGIC_MODEL_NO_TIE
`else

`ifdef WLOGIC_MODEL_TIE_CHECK
  wire signals_ok;
  assign signals_ok = tiehi & ~tielo;

  assign q = (signals_ok) ? 1'bz : 1'bx;
`endif // WLOGIC_MODEL_TIE_CHECK

`endif //WLOGIC_MODEL_NO_TIE


`ifdef WLOGIC_MODEL_NO_PG
`else

`ifdef WLOGIC_MODEL_PWR_CHECK
  wire   power_ok;
  assign power_ok = ~vss & vdd;
 
  assign q = (power_ok) ? 1'bz : 1'bx;
 
`endif //WLOGIC_MODEL_PWR_CHECK

`endif //WLOGIC_MODEL_NO_PG

assign #1  q = polarity_ok ?
                           (clkb) ?
                                  (d===1'bx) ? $random : d
                                  : q
                           : 1'bx;


endmodule

//systemVerilog HDL for "wavshared_tsmc12ffc_lib", "wphy_cgc_diff_rh_lvt_INVT_D2_GL16_LVT" "systemVerilog"

module wphy_cgc_diff_rh_lvt_INVT_D2_GL16_LVT( in, out, en, enb 
`ifdef WLOGIC_MODEL_NO_PG
`else
, vdd, vss
`endif //WLOGIC_MODEL_NO_PG
);

  input in;
  input en, enb;
  output out;
`ifdef WLOGIC_MODEL_NO_PG
`else
  inout vdd;
  inout vss;
`endif //WLOGIC_MODEL_NO_PG

  wire out;

`ifdef WLOGIC_MODEL_NO_PG
`else

`ifdef WLOGIC_MODEL_PWR_CHECK
  wire   power_ok;
  assign power_ok = ~vss & vdd;
  
  assign out = (power_ok) ? 1'bz : 1'bx;

`endif //WLOGIC_MODEL_PWR_CHECK

`endif //WLOGIC_MODEL_NO_PG



assign out = (en) ? ~in:1'bz;


endmodule
`endif //SYNTHESIS
