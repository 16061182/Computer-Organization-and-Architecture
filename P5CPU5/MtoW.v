`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:49:09 12/18/2017 
// Design Name: 
// Module Name:    MtoW 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module MtoW(
	input clk,
	input reset,
	input [31:0] ir,
	input [31:0] aluout,
	input [31:0] dmout,
	input [31:0] pc4,
	input [31:0] pc8,
	input bgezal,
	input movz,
	output [31:0] ir_w,
	output [31:0] aluout_w,
	output [31:0] dmout_w,
	output [31:0] pc4_w,
	output [31:0] pc8_w,
	output bgezal_w,
	output movz_w
    );
	
	reg [31:0] IR_W;
	reg [31:0] ALUOUT_W;
	reg [31:0] DMOUT_W;
	reg [31:0] PC4_W;
	reg [31:0] PC8_W;
	reg BGEZAL_W;
	reg MOVZ_W;
	
	assign ir_w = IR_W;
	assign aluout_w = ALUOUT_W;
	assign dmout_w = DMOUT_W;
	assign pc4_w = PC4_W;
	assign pc8_w = PC8_W;
	assign bgezal_w = BGEZAL_W;
	assign movz_w = MOVZ_W;
	
	always @(posedge clk) begin
		if(reset) begin
			IR_W <= 0;
			ALUOUT_W <= 0;
			DMOUT_W <= 0;
			PC4_W <= 0;
			PC8_W <= 0;
			BGEZAL_W <= 0;
			MOVZ_W <= 0;
		end
		else begin
			IR_W <= ir;
			ALUOUT_W <= aluout;
			DMOUT_W <= dmout;
			PC4_W <= pc4;
			PC8_W <= pc8;
			BGEZAL_W <= bgezal;
			MOVZ_W <= movz;
		end
	end
endmodule
