#include "gameboy_architecture.hpp"

// Generated from http://imrannazar.com/Gameboy-Z80-Opcode-Map

GameBoyArchitecture::TDisassembler const GameBoyArchitecture::m_OpcodeMap[0x100] =
{
  &GameBoyArchitecture::Insn_Nop,      &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Inc,      &GameBoyArchitecture::Insn_Inc,      &GameBoyArchitecture::Insn_Dec,      &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Rlc,      /* 00 */
  &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Add,      &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Dec,      &GameBoyArchitecture::Insn_Inc,      &GameBoyArchitecture::Insn_Dec,      &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Rrc,      /* 08 */
  &GameBoyArchitecture::Insn_Stop,     &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Inc,      &GameBoyArchitecture::Insn_Inc,      &GameBoyArchitecture::Insn_Dec,      &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Rl,       /* 10 */
  &GameBoyArchitecture::Insn_Jr,       &GameBoyArchitecture::Insn_Add,      &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Dec,      &GameBoyArchitecture::Insn_Inc,      &GameBoyArchitecture::Insn_Dec,      &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Rr,       /* 18 */
  &GameBoyArchitecture::Insn_Jr,       &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Ldi,      &GameBoyArchitecture::Insn_Inc,      &GameBoyArchitecture::Insn_Inc,      &GameBoyArchitecture::Insn_Dec,      &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Daa,      /* 20 */
  &GameBoyArchitecture::Insn_Jr,       &GameBoyArchitecture::Insn_Add,      &GameBoyArchitecture::Insn_Ldi,      &GameBoyArchitecture::Insn_Dec,      &GameBoyArchitecture::Insn_Inc,      &GameBoyArchitecture::Insn_Dec,      &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Cpl,      /* 28 */
  &GameBoyArchitecture::Insn_Jr,       &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Ldd,      &GameBoyArchitecture::Insn_Inc,      &GameBoyArchitecture::Insn_Inc,      &GameBoyArchitecture::Insn_Dec,      &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Scf,      /* 30 */
  &GameBoyArchitecture::Insn_Jr,       &GameBoyArchitecture::Insn_Add,      &GameBoyArchitecture::Insn_Ldd,      &GameBoyArchitecture::Insn_Dec,      &GameBoyArchitecture::Insn_Inc,      &GameBoyArchitecture::Insn_Dec,      &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Ccf,      /* 38 */
  &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Ld,       /* 40 */
  &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Ld,       /* 48 */
  &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Ld,       /* 50 */
  &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Ld,       /* 58 */
  &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Ld,       /* 60 */
  &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Ld,       /* 68 */
  &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Halt,     &GameBoyArchitecture::Insn_Ld,       /* 70 */
  &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Ld,       /* 78 */
  &GameBoyArchitecture::Insn_Add,      &GameBoyArchitecture::Insn_Add,      &GameBoyArchitecture::Insn_Add,      &GameBoyArchitecture::Insn_Add,      &GameBoyArchitecture::Insn_Add,      &GameBoyArchitecture::Insn_Add,      &GameBoyArchitecture::Insn_Add,      &GameBoyArchitecture::Insn_Add,      /* 80 */
  &GameBoyArchitecture::Insn_Adc,      &GameBoyArchitecture::Insn_Adc,      &GameBoyArchitecture::Insn_Adc,      &GameBoyArchitecture::Insn_Adc,      &GameBoyArchitecture::Insn_Adc,      &GameBoyArchitecture::Insn_Adc,      &GameBoyArchitecture::Insn_Adc,      &GameBoyArchitecture::Insn_Adc,      /* 88 */
  &GameBoyArchitecture::Insn_Sub,      &GameBoyArchitecture::Insn_Sub,      &GameBoyArchitecture::Insn_Sub,      &GameBoyArchitecture::Insn_Sub,      &GameBoyArchitecture::Insn_Sub,      &GameBoyArchitecture::Insn_Sub,      &GameBoyArchitecture::Insn_Sub,      &GameBoyArchitecture::Insn_Sub,      /* 90 */
  &GameBoyArchitecture::Insn_Sbc,      &GameBoyArchitecture::Insn_Sbc,      &GameBoyArchitecture::Insn_Sbc,      &GameBoyArchitecture::Insn_Sbc,      &GameBoyArchitecture::Insn_Sbc,      &GameBoyArchitecture::Insn_Sbc,      &GameBoyArchitecture::Insn_Sbc,      &GameBoyArchitecture::Insn_Sbc,      /* 98 */
  &GameBoyArchitecture::Insn_And,      &GameBoyArchitecture::Insn_And,      &GameBoyArchitecture::Insn_And,      &GameBoyArchitecture::Insn_And,      &GameBoyArchitecture::Insn_And,      &GameBoyArchitecture::Insn_And,      &GameBoyArchitecture::Insn_And,      &GameBoyArchitecture::Insn_And,      /* a0 */
  &GameBoyArchitecture::Insn_Xor,      &GameBoyArchitecture::Insn_Xor,      &GameBoyArchitecture::Insn_Xor,      &GameBoyArchitecture::Insn_Xor,      &GameBoyArchitecture::Insn_Xor,      &GameBoyArchitecture::Insn_Xor,      &GameBoyArchitecture::Insn_Xor,      &GameBoyArchitecture::Insn_Xor,      /* a8 */
  &GameBoyArchitecture::Insn_Or,       &GameBoyArchitecture::Insn_Or,       &GameBoyArchitecture::Insn_Or,       &GameBoyArchitecture::Insn_Or,       &GameBoyArchitecture::Insn_Or,       &GameBoyArchitecture::Insn_Or,       &GameBoyArchitecture::Insn_Or,       &GameBoyArchitecture::Insn_Or,       /* b0 */
  &GameBoyArchitecture::Insn_Cp,       &GameBoyArchitecture::Insn_Cp,       &GameBoyArchitecture::Insn_Cp,       &GameBoyArchitecture::Insn_Cp,       &GameBoyArchitecture::Insn_Cp,       &GameBoyArchitecture::Insn_Cp,       &GameBoyArchitecture::Insn_Cp,       &GameBoyArchitecture::Insn_Cp,       /* b8 */
  &GameBoyArchitecture::Insn_Ret,      &GameBoyArchitecture::Insn_Pop,      &GameBoyArchitecture::Insn_Jp,       &GameBoyArchitecture::Insn_Jp,       &GameBoyArchitecture::Insn_Call,     &GameBoyArchitecture::Insn_Push,     &GameBoyArchitecture::Insn_Add,      &GameBoyArchitecture::Insn_Rst,      /* c0 */
  &GameBoyArchitecture::Insn_Ret,      &GameBoyArchitecture::Insn_Ret,      &GameBoyArchitecture::Insn_Jp,       &GameBoyArchitecture::Insn_Invalid,  &GameBoyArchitecture::Insn_Call,     &GameBoyArchitecture::Insn_Call,     &GameBoyArchitecture::Insn_Adc,      &GameBoyArchitecture::Insn_Rst,      /* c8 */
  &GameBoyArchitecture::Insn_Ret,      &GameBoyArchitecture::Insn_Pop,      &GameBoyArchitecture::Insn_Jp,       &GameBoyArchitecture::Insn_Invalid,  &GameBoyArchitecture::Insn_Call,     &GameBoyArchitecture::Insn_Push,     &GameBoyArchitecture::Insn_Sub,      &GameBoyArchitecture::Insn_Rst,      /* d0 */
  &GameBoyArchitecture::Insn_Ret,      &GameBoyArchitecture::Insn_Reti,     &GameBoyArchitecture::Insn_Jp,       &GameBoyArchitecture::Insn_Invalid,  &GameBoyArchitecture::Insn_Call,     &GameBoyArchitecture::Insn_Invalid,  &GameBoyArchitecture::Insn_Sbc,      &GameBoyArchitecture::Insn_Rst,      /* d8 */
  &GameBoyArchitecture::Insn_Ldh,      &GameBoyArchitecture::Insn_Pop,      &GameBoyArchitecture::Insn_Ldh,      &GameBoyArchitecture::Insn_Invalid,  &GameBoyArchitecture::Insn_Invalid,  &GameBoyArchitecture::Insn_Push,     &GameBoyArchitecture::Insn_And,      &GameBoyArchitecture::Insn_Rst,      /* e0 */
  &GameBoyArchitecture::Insn_Add,      &GameBoyArchitecture::Insn_Jp,       &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Invalid,  &GameBoyArchitecture::Insn_Invalid,  &GameBoyArchitecture::Insn_Invalid,  &GameBoyArchitecture::Insn_Xor,      &GameBoyArchitecture::Insn_Rst,      /* e8 */
  &GameBoyArchitecture::Insn_Ldh,      &GameBoyArchitecture::Insn_Pop,      &GameBoyArchitecture::Insn_Ldh,      &GameBoyArchitecture::Insn_Di,       &GameBoyArchitecture::Insn_Invalid,  &GameBoyArchitecture::Insn_Push,     &GameBoyArchitecture::Insn_Or,       &GameBoyArchitecture::Insn_Rst,      /* f0 */
  &GameBoyArchitecture::Insn_Ldhl,     &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Ld,       &GameBoyArchitecture::Insn_Ei,       &GameBoyArchitecture::Insn_Invalid,  &GameBoyArchitecture::Insn_Invalid,  &GameBoyArchitecture::Insn_Cp,       &GameBoyArchitecture::Insn_Rst,      /* f8 */
};

GameBoyArchitecture::TDisassembler const GameBoyArchitecture::m_CbPrefix[0x100] =
{
  &GameBoyArchitecture::Insn_Rlc,      &GameBoyArchitecture::Insn_Rlc,      &GameBoyArchitecture::Insn_Rlc,      &GameBoyArchitecture::Insn_Rlc,      &GameBoyArchitecture::Insn_Rlc,      &GameBoyArchitecture::Insn_Rlc,      &GameBoyArchitecture::Insn_Rlc,      &GameBoyArchitecture::Insn_Rlc,      /* 00 */
  &GameBoyArchitecture::Insn_Rrc,      &GameBoyArchitecture::Insn_Rrc,      &GameBoyArchitecture::Insn_Rrc,      &GameBoyArchitecture::Insn_Rrc,      &GameBoyArchitecture::Insn_Rrc,      &GameBoyArchitecture::Insn_Rrc,      &GameBoyArchitecture::Insn_Rrc,      &GameBoyArchitecture::Insn_Rrc,      /* 08 */
  &GameBoyArchitecture::Insn_Rl,       &GameBoyArchitecture::Insn_Rl,       &GameBoyArchitecture::Insn_Rl,       &GameBoyArchitecture::Insn_Rl,       &GameBoyArchitecture::Insn_Rl,       &GameBoyArchitecture::Insn_Rl,       &GameBoyArchitecture::Insn_Rl,       &GameBoyArchitecture::Insn_Rl,       /* 10 */
  &GameBoyArchitecture::Insn_Rr,       &GameBoyArchitecture::Insn_Rr,       &GameBoyArchitecture::Insn_Rr,       &GameBoyArchitecture::Insn_Rr,       &GameBoyArchitecture::Insn_Rr,       &GameBoyArchitecture::Insn_Rr,       &GameBoyArchitecture::Insn_Rr,       &GameBoyArchitecture::Insn_Rr,       /* 18 */
  &GameBoyArchitecture::Insn_Sla,      &GameBoyArchitecture::Insn_Sla,      &GameBoyArchitecture::Insn_Sla,      &GameBoyArchitecture::Insn_Sla,      &GameBoyArchitecture::Insn_Sla,      &GameBoyArchitecture::Insn_Sla,      &GameBoyArchitecture::Insn_Sla,      &GameBoyArchitecture::Insn_Sla,      /* 20 */
  &GameBoyArchitecture::Insn_Sra,      &GameBoyArchitecture::Insn_Sra,      &GameBoyArchitecture::Insn_Sra,      &GameBoyArchitecture::Insn_Sra,      &GameBoyArchitecture::Insn_Sra,      &GameBoyArchitecture::Insn_Sra,      &GameBoyArchitecture::Insn_Sra,      &GameBoyArchitecture::Insn_Sra,      /* 28 */
  &GameBoyArchitecture::Insn_Swap,     &GameBoyArchitecture::Insn_Swap,     &GameBoyArchitecture::Insn_Swap,     &GameBoyArchitecture::Insn_Swap,     &GameBoyArchitecture::Insn_Swap,     &GameBoyArchitecture::Insn_Swap,     &GameBoyArchitecture::Insn_Swap,     &GameBoyArchitecture::Insn_Swap,     /* 30 */
  &GameBoyArchitecture::Insn_Srl,      &GameBoyArchitecture::Insn_Srl,      &GameBoyArchitecture::Insn_Srl,      &GameBoyArchitecture::Insn_Srl,      &GameBoyArchitecture::Insn_Srl,      &GameBoyArchitecture::Insn_Srl,      &GameBoyArchitecture::Insn_Srl,      &GameBoyArchitecture::Insn_Srl,      /* 38 */
  &GameBoyArchitecture::Insn_Bit,      &GameBoyArchitecture::Insn_Bit,      &GameBoyArchitecture::Insn_Bit,      &GameBoyArchitecture::Insn_Bit,      &GameBoyArchitecture::Insn_Bit,      &GameBoyArchitecture::Insn_Bit,      &GameBoyArchitecture::Insn_Bit,      &GameBoyArchitecture::Insn_Bit,      /* 40 */
  &GameBoyArchitecture::Insn_Bit,      &GameBoyArchitecture::Insn_Bit,      &GameBoyArchitecture::Insn_Bit,      &GameBoyArchitecture::Insn_Bit,      &GameBoyArchitecture::Insn_Bit,      &GameBoyArchitecture::Insn_Bit,      &GameBoyArchitecture::Insn_Bit,      &GameBoyArchitecture::Insn_Bit,      /* 48 */
  &GameBoyArchitecture::Insn_Bit,      &GameBoyArchitecture::Insn_Bit,      &GameBoyArchitecture::Insn_Bit,      &GameBoyArchitecture::Insn_Bit,      &GameBoyArchitecture::Insn_Bit,      &GameBoyArchitecture::Insn_Bit,      &GameBoyArchitecture::Insn_Bit,      &GameBoyArchitecture::Insn_Bit,      /* 50 */
  &GameBoyArchitecture::Insn_Bit,      &GameBoyArchitecture::Insn_Bit,      &GameBoyArchitecture::Insn_Bit,      &GameBoyArchitecture::Insn_Bit,      &GameBoyArchitecture::Insn_Bit,      &GameBoyArchitecture::Insn_Bit,      &GameBoyArchitecture::Insn_Bit,      &GameBoyArchitecture::Insn_Bit,      /* 58 */
  &GameBoyArchitecture::Insn_Bit,      &GameBoyArchitecture::Insn_Bit,      &GameBoyArchitecture::Insn_Bit,      &GameBoyArchitecture::Insn_Bit,      &GameBoyArchitecture::Insn_Bit,      &GameBoyArchitecture::Insn_Bit,      &GameBoyArchitecture::Insn_Bit,      &GameBoyArchitecture::Insn_Bit,      /* 60 */
  &GameBoyArchitecture::Insn_Bit,      &GameBoyArchitecture::Insn_Bit,      &GameBoyArchitecture::Insn_Bit,      &GameBoyArchitecture::Insn_Bit,      &GameBoyArchitecture::Insn_Bit,      &GameBoyArchitecture::Insn_Bit,      &GameBoyArchitecture::Insn_Bit,      &GameBoyArchitecture::Insn_Bit,      /* 68 */
  &GameBoyArchitecture::Insn_Bit,      &GameBoyArchitecture::Insn_Bit,      &GameBoyArchitecture::Insn_Bit,      &GameBoyArchitecture::Insn_Bit,      &GameBoyArchitecture::Insn_Bit,      &GameBoyArchitecture::Insn_Bit,      &GameBoyArchitecture::Insn_Bit,      &GameBoyArchitecture::Insn_Bit,      /* 70 */
  &GameBoyArchitecture::Insn_Bit,      &GameBoyArchitecture::Insn_Bit,      &GameBoyArchitecture::Insn_Bit,      &GameBoyArchitecture::Insn_Bit,      &GameBoyArchitecture::Insn_Bit,      &GameBoyArchitecture::Insn_Bit,      &GameBoyArchitecture::Insn_Bit,      &GameBoyArchitecture::Insn_Bit,      /* 78 */
  &GameBoyArchitecture::Insn_Res,      &GameBoyArchitecture::Insn_Res,      &GameBoyArchitecture::Insn_Res,      &GameBoyArchitecture::Insn_Res,      &GameBoyArchitecture::Insn_Res,      &GameBoyArchitecture::Insn_Res,      &GameBoyArchitecture::Insn_Res,      &GameBoyArchitecture::Insn_Res,      /* 80 */
  &GameBoyArchitecture::Insn_Res,      &GameBoyArchitecture::Insn_Res,      &GameBoyArchitecture::Insn_Res,      &GameBoyArchitecture::Insn_Res,      &GameBoyArchitecture::Insn_Res,      &GameBoyArchitecture::Insn_Res,      &GameBoyArchitecture::Insn_Res,      &GameBoyArchitecture::Insn_Res,      /* 88 */
  &GameBoyArchitecture::Insn_Res,      &GameBoyArchitecture::Insn_Res,      &GameBoyArchitecture::Insn_Res,      &GameBoyArchitecture::Insn_Res,      &GameBoyArchitecture::Insn_Res,      &GameBoyArchitecture::Insn_Res,      &GameBoyArchitecture::Insn_Res,      &GameBoyArchitecture::Insn_Res,      /* 90 */
  &GameBoyArchitecture::Insn_Res,      &GameBoyArchitecture::Insn_Res,      &GameBoyArchitecture::Insn_Res,      &GameBoyArchitecture::Insn_Res,      &GameBoyArchitecture::Insn_Res,      &GameBoyArchitecture::Insn_Res,      &GameBoyArchitecture::Insn_Res,      &GameBoyArchitecture::Insn_Res,      /* 98 */
  &GameBoyArchitecture::Insn_Res,      &GameBoyArchitecture::Insn_Res,      &GameBoyArchitecture::Insn_Res,      &GameBoyArchitecture::Insn_Res,      &GameBoyArchitecture::Insn_Res,      &GameBoyArchitecture::Insn_Res,      &GameBoyArchitecture::Insn_Res,      &GameBoyArchitecture::Insn_Res,      /* a0 */
  &GameBoyArchitecture::Insn_Res,      &GameBoyArchitecture::Insn_Res,      &GameBoyArchitecture::Insn_Res,      &GameBoyArchitecture::Insn_Res,      &GameBoyArchitecture::Insn_Res,      &GameBoyArchitecture::Insn_Res,      &GameBoyArchitecture::Insn_Res,      &GameBoyArchitecture::Insn_Res,      /* a8 */
  &GameBoyArchitecture::Insn_Res,      &GameBoyArchitecture::Insn_Res,      &GameBoyArchitecture::Insn_Res,      &GameBoyArchitecture::Insn_Res,      &GameBoyArchitecture::Insn_Res,      &GameBoyArchitecture::Insn_Res,      &GameBoyArchitecture::Insn_Res,      &GameBoyArchitecture::Insn_Res,      /* b0 */
  &GameBoyArchitecture::Insn_Res,      &GameBoyArchitecture::Insn_Res,      &GameBoyArchitecture::Insn_Res,      &GameBoyArchitecture::Insn_Res,      &GameBoyArchitecture::Insn_Res,      &GameBoyArchitecture::Insn_Res,      &GameBoyArchitecture::Insn_Res,      &GameBoyArchitecture::Insn_Res,      /* b8 */
  &GameBoyArchitecture::Insn_Set,      &GameBoyArchitecture::Insn_Set,      &GameBoyArchitecture::Insn_Set,      &GameBoyArchitecture::Insn_Set,      &GameBoyArchitecture::Insn_Set,      &GameBoyArchitecture::Insn_Set,      &GameBoyArchitecture::Insn_Set,      &GameBoyArchitecture::Insn_Set,      /* c0 */
  &GameBoyArchitecture::Insn_Set,      &GameBoyArchitecture::Insn_Set,      &GameBoyArchitecture::Insn_Set,      &GameBoyArchitecture::Insn_Set,      &GameBoyArchitecture::Insn_Set,      &GameBoyArchitecture::Insn_Set,      &GameBoyArchitecture::Insn_Set,      &GameBoyArchitecture::Insn_Set,      /* c8 */
  &GameBoyArchitecture::Insn_Set,      &GameBoyArchitecture::Insn_Set,      &GameBoyArchitecture::Insn_Set,      &GameBoyArchitecture::Insn_Set,      &GameBoyArchitecture::Insn_Set,      &GameBoyArchitecture::Insn_Set,      &GameBoyArchitecture::Insn_Set,      &GameBoyArchitecture::Insn_Set,      /* d0 */
  &GameBoyArchitecture::Insn_Set,      &GameBoyArchitecture::Insn_Set,      &GameBoyArchitecture::Insn_Set,      &GameBoyArchitecture::Insn_Set,      &GameBoyArchitecture::Insn_Set,      &GameBoyArchitecture::Insn_Set,      &GameBoyArchitecture::Insn_Set,      &GameBoyArchitecture::Insn_Set,      /* d8 */
  &GameBoyArchitecture::Insn_Set,      &GameBoyArchitecture::Insn_Set,      &GameBoyArchitecture::Insn_Set,      &GameBoyArchitecture::Insn_Set,      &GameBoyArchitecture::Insn_Set,      &GameBoyArchitecture::Insn_Set,      &GameBoyArchitecture::Insn_Set,      &GameBoyArchitecture::Insn_Set,      /* e0 */
  &GameBoyArchitecture::Insn_Set,      &GameBoyArchitecture::Insn_Set,      &GameBoyArchitecture::Insn_Set,      &GameBoyArchitecture::Insn_Set,      &GameBoyArchitecture::Insn_Set,      &GameBoyArchitecture::Insn_Set,      &GameBoyArchitecture::Insn_Set,      &GameBoyArchitecture::Insn_Set,      /* e8 */
  &GameBoyArchitecture::Insn_Set,      &GameBoyArchitecture::Insn_Set,      &GameBoyArchitecture::Insn_Set,      &GameBoyArchitecture::Insn_Set,      &GameBoyArchitecture::Insn_Set,      &GameBoyArchitecture::Insn_Set,      &GameBoyArchitecture::Insn_Set,      &GameBoyArchitecture::Insn_Set,      /* f0 */
  &GameBoyArchitecture::Insn_Set,      &GameBoyArchitecture::Insn_Set,      &GameBoyArchitecture::Insn_Set,      &GameBoyArchitecture::Insn_Set,      &GameBoyArchitecture::Insn_Set,      &GameBoyArchitecture::Insn_Set,      &GameBoyArchitecture::Insn_Set,      &GameBoyArchitecture::Insn_Set,      /* f8 */
};
