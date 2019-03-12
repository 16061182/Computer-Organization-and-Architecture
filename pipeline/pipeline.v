`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:16:30 10/18/2017 
// Design Name: 
// Module Name:    pipeline 
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
module pipeline(
	input [31:0] A1,
	input [31:0] A2,
	input [31:0] B1,
	input [31:0] B2,
	input clk,
	output reg [31:0] C = 0
    );
	 
	 reg [31:0] step [1:0];
	 
	 initial begin
		step[0] = 0;
		step[1] = 0;
	 end
	 
	 always @(posedge clk) begin
		step[0] <= A1 * B1;
		step[1] <= A2 * B2;
		
		C <= step[0] + step[1];
	 end
	 
endmodule
