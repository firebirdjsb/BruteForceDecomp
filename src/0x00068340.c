/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 464EC7ED66881370473A025F52EDAB7C589BCD4BFF15A6981CB62FA1BF370717
 * Entry: 0x00068340, Ghidra index: 1147, label: FUN_00068340
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched callback/address references (not an ABI verification).
 * Original x86 register, stack and indirect call contracts remain ABI_UNVERIFIED. */
extern float10 FUN_00233b90(void);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003ffb80;
extern uint32_t DAT_00469830;
extern uint32_t DAT_004698d4;
extern uint32_t DAT_004698d8;
extern uint32_t DAT_00469b3c;
extern uint32_t DAT_0046cfd8;
extern uint32_t DAT_0046cfdc;
extern uint32_t DAT_004a8d4c;
extern uint32_t UNK_00068290;
extern uint32_t _DAT_003ffc10;
extern uint32_t _DAT_0046991c;
extern uint32_t _DAT_004a8d4c;
extern uint32_t _DAT_004a8d50;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00068340(void)

{
  char cVar1;
  undefined4 uVar2;
  uint extraout_EAX;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *unaff_EDI;
  byte local_9;
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  local_9 = 0;
  unaff_EDI[5] = 0x3f800000;
  unaff_EDI[6] = 0x3f800000;
  unaff_EDI[7] = 0x280;
  unaff_EDI[8] = 0x1e0;
  cVar1 = FUN_0006a750((int)unaff_EDI + 5,0x1e0,6,0x2a,0x11,1);
  if (cVar1 != '\0') {
    uVar2 = FUN_00068020();
    cVar1 = FUN_002376b0(&DAT_003ffb80,uVar2,0);
    if (cVar1 == '\0') {
      _abort();
      return extraout_EAX;
    }
    DAT_0046cfd8 = 0;
    DAT_0046cfdc = 0;
    _DAT_0046991c = 0;
    DAT_00469830 = FUN_00233b90;
    (**(code **)(*unaff_EDI + 0x2c))(0);
    if (DAT_00469b3c != 0) {
      D3D8LTCG__D3DDevice_Clear(0,0,0xf3,0,0x3f800000,0);
    }
    D3D8LTCG__D3DDevice_Swap_0();
    if (DAT_00469b3c != 0) {
      D3D8LTCG__D3DDevice_Clear(0,0,0xf3,0,0x3f800000,0);
    }
    if ((_DAT_004a8d50 & 1) == 0) {
      _DAT_004a8d50 = _DAT_004a8d50 | 1;
      _DAT_004a8d4c = XAPILIB__XGetLanguage();
    }
    iVar3 = XAPILIB__XGetVideoStandard();
    uVar4 = XAPILIB__XGetVideoFlags();
    if ((iVar3 != 3) || (_DAT_003ffc10 = 0x19, (uVar4 & 0x40) != 0)) {
      _DAT_003ffc10 = 0x1e;
    }
    DAT_004698d4 = &UNK_00068290;
    DAT_004698d8 = &DAT_004a8d4c;
    cVar1 = FUN_001ea2e0(DAT_00469b3c,0x11);
    if (cVar1 != '\0') {
      (**(code **)(*unaff_EDI + 0x1c))(auStack_4,auStack_8);
      FUN_00067d90(0x3f800000,0,0x3f800000,0);
      iVar3 = FUN_002ea01d(0x6f4);
      if (iVar3 == 0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5 = (undefined4 *)FUN_00079e70();
      }
      unaff_EDI[2] = (int)puVar5;
      local_9 = (**(code **)*puVar5)();
    }
    DAT_004698d4 = (undefined *)0x0;
    DAT_004698d8 = (undefined *)0x0;
  }
  return (uint)local_9;
}
