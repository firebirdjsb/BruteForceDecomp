/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 230643FAEEF8627778B4190BF72A538E84E43ED9344A3A80A0B481270B1B462A
 * Entry: 0x00286710, Ghidra index: 9083, label: FUN_00286710
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
undefined4 FUN_00286710(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint unaff_ESI;
  int *unaff_EDI;
  undefined4 local_4;
  
  local_4 = 0;
  (**(code **)(*param_2 + 0x10))(param_2,&local_4);
  (**(code **)(*unaff_EDI + 0x20))(unaff_EDI,&stack0x00000000);
  if (unaff_ESI < 0x1bdf702e) {
    if (unaff_ESI == 0x1bdf702d) {
      iVar1 = unaff_EDI[0x1d];
      unaff_EDI[0x1d] = iVar1 + 1;
      unaff_EDI[10] = iVar1 * 0x10 + *(int *)(unaff_EDI[9] + 0x1c);
    }
    else if (unaff_ESI == 0x4743737) {
      unaff_EDI[0x10] = 0x41f00000;
    }
    else if (unaff_ESI == 0x1517d698) {
      unaff_EDI[8] = 0;
      unaff_EDI[0x1b] = 0;
    }
    else if (unaff_ESI == 0x1b0f2ab6) {
      iVar1 = unaff_EDI[0x1b];
      unaff_EDI[0x1b] = iVar1 + 1;
      unaff_EDI[8] = *(int *)(unaff_EDI[7] + 0x14) + iVar1 * 0x18;
      unaff_EDI[0xd] = DAT_0046d064;
      unaff_EDI[0x1c] = 0;
      unaff_EDI[9] = 0;
    }
  }
  else if (unaff_ESI == 0xe0d7811b) {
    puVar2 = (undefined4 *)FUN_002ea01d(0x28);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2[3] = 0;
      puVar2[5] = 0;
      puVar2[7] = 0;
      puVar2[8] = 0;
      puVar2[9] = 0;
      puVar2[1] = 0xc7c35000;
      puVar2[2] = 0;
      *puVar2 = 0;
      *(undefined2 *)(puVar2 + 4) = 0xffff;
    }
    iVar1 = unaff_EDI[0x1c];
    unaff_EDI[0x1c] = iVar1 + 1;
    unaff_EDI[9] = (int)puVar2;
    *(undefined4 **)(*(int *)(unaff_EDI[8] + 8) + iVar1 * 4) = puVar2;
    unaff_EDI[0xc] = DAT_0046d064;
    unaff_EDI[0x1d] = 0;
    unaff_EDI[10] = 0;
  }
  else if (unaff_ESI == 0xf1b71e33) {
    unaff_EDI[0x1e] = 0;
    unaff_EDI[8] = 0;
    unaff_EDI[9] = 0;
  }
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 8))(param_2);
  }
  return 0;
}
