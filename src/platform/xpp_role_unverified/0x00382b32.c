/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 04CEF25C16E6F7F08CD1B1FF4FEF1AD559D084BE2AB43A1D6C5B721289E9779A
 * Entry: 0x00382b32, Ghidra index: 13606, label: FUN_00382b32
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
extern uint32_t _DAT_0041272c;
extern uint32_t _DAT_00412730;
extern uint32_t _DAT_00412738;
extern uint32_t _DAT_0041273c;
extern uint32_t _DAT_00412740;
extern uint32_t _DAT_0041274e;
extern uint32_t _DAT_00412750;
extern uint32_t _DAT_00412752;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00382b32(void)

{
  int in_ECX;
  int iVar1;
  
  iVar1 = *(int *)(in_ECX + 0xc) + 0x18;
  DAT_00412723 = 1;
  if (DAT_00412721 == '\0') {
    *(undefined4 *)(in_ECX + 0x18) = 0;
    DAT_00412724 = 0x20;
    DAT_00412725 = 2;
    _DAT_0041272c = 0;
    _DAT_00412740 = 8;
    DAT_00412742 = *(byte *)(in_ECX + 4) >> 7;
    _DAT_00412738 = 0;
    FUN_00383a75(iVar1,&DAT_00412724);
    *(undefined4 *)(in_ECX + 8) = DAT_00412734;
    DAT_00412724 = 0x30;
    DAT_00412725 = 0x40;
    _DAT_0041272c = 0x382910;
    DAT_00412734 = *(undefined4 *)(in_ECX + 8);
    _DAT_0041273c = 0x4127a4;
    _DAT_00412738 = 8;
    _DAT_00412740 = 2;
    DAT_00412742 = 0;
    DAT_0041274c = 0x80;
    DAT_0041274d = 6;
    _DAT_0041274e = 0x100;
    _DAT_00412750 = 0;
    _DAT_00412752 = 8;
    _DAT_00412730 = in_ECX;
    FUN_003821f6();
    FUN_00383a75(iVar1,&DAT_00412724);
  }
  else {
    FUN_0038267d(0,in_ECX);
  }
  return;
}
