/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7829B6A21710AEE3C6C33E40E23209F8913295A25ED15C7AAFAA0B95DDD879DD
 * Entry: 0x00382ceb, Ghidra index: 13608, label: FUN_00382ceb
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00412721;
extern uint32_t DAT_00412723;
extern uint32_t DAT_00412724;
extern uint32_t DAT_00412725;
extern uint32_t DAT_00412734;
extern uint32_t DAT_00412742;
extern uint32_t DAT_0041274c;
extern uint32_t DAT_0041274d;
extern uint32_t DAT_004127a8;
extern uint32_t DAT_004127a9;
extern uint32_t DAT_004127aa;
extern uint32_t DAT_004127ab;
extern uint32_t DAT_004127ac;
extern uint32_t _DAT_0041272c;
extern uint32_t _DAT_00412730;
extern uint32_t _DAT_00412738;
extern uint32_t _DAT_0041273c;
extern uint32_t _DAT_00412740;
extern uint32_t _DAT_0041274e;
extern uint32_t _DAT_00412750;
extern uint32_t _DAT_00412752;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00382ceb(void)

{
  char *in_EDX;
  undefined4 local_8;
  
  DAT_00412723 = 4;
  if (DAT_00412721 == '\0') {
    if (DAT_004127a8 == '\0') {
      _DAT_00412740 = (ushort)DAT_004127ab;
      DAT_00412724 = 0x20;
      DAT_00412725 = 2;
      _DAT_0041272c = (code *)0x0;
      DAT_00412742 = (byte)in_EDX[4] >> 7;
      _DAT_00412738 = (uint)(byte)in_EDX[5];
      FUN_00383a75(*(int *)(in_EDX + 0xc) + 0x18,&DAT_00412724);
      *(undefined4 *)(in_EDX + 8) = DAT_00412734;
      DAT_00412724 = 0x30;
      DAT_00412725 = 0x40;
      _DAT_0041272c = FUN_00382c32;
      DAT_00412734 = *(undefined4 *)(in_EDX + 8);
      _DAT_0041273c = &DAT_004127ac;
      _DAT_00412738 = 0x50;
      _DAT_00412740 = 0x102;
      DAT_00412742 = 0;
      DAT_0041274c = 0x80;
      DAT_0041274d = 6;
      _DAT_0041274e = 0x200;
      _DAT_00412750 = 0;
      _DAT_00412752 = 0x50;
      _DAT_00412730 = in_EDX;
      FUN_003821f6();
      FUN_00383a75(*(int *)(in_EDX + 0xc) + 0x18,&DAT_00412724);
    }
    else {
      *in_EDX = (DAT_004127a8 != '\t') + '\x01';
      local_8 = CONCAT31(CONCAT12(DAT_004127aa,CONCAT11(DAT_004127a9,DAT_004127a8)),0x81);
      FUN_003828dc(local_8);
    }
  }
  else {
    FUN_0038267d(0,in_EDX);
  }
  return;
}
