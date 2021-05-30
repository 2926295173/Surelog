// Copyright (C) 2019-2021  The SymbiFlow Authors.
//
// Use of this source code is governed by a ISC-style
// license that can be found in the LICENSE file or at
// https://opensource.org/licenses/ISC
//
// SPDX-License-Identifier: ISC


/*
:name: class_test_21
:description: Test
:tags: 6.15 8.3
*/
package Package;
class Bar #(int X=0, int Y=1, int Z=2); endclass
endpackage
localparam x=3, y=4, z=5;

class Foo extends Package::Bar #(x,y,z); endclass

module test;
endmodule
