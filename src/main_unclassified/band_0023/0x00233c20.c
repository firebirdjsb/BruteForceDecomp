/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 72A9C21EC07077A73B730E6393FE1F82A7B6DBD07107150E781E32C77F091918
 * Entry: 0x00233c20, Ghidra index: 7793, label: FUN_00233c20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s_23_23_IAnimationBlenderOp_00406ec8[];
undefined1 FUN_00233c20(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 *unaff_ESI;
  int unaff_EDI;
  int *piVar4;
  int *piVar5;
  int *piStack_78;
  undefined1 *puStack_74;
  undefined4 local_6c;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  undefined1 auStack_54 [16];
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined1 auStack_34 [12];
  float fStack_28;
  float fStack_24;
  float fStack_20;
  undefined4 auStack_8 [2];
  
  puVar1 = (undefined4 *)unaff_ESI[8];
  puStack_74 = (undefined1 *)&local_6c;
  uVar3 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    piStack_78 = (int *)s_23_23_IAnimationBlenderOp_00406ec8;
    local_6c = 0;
    iVar2 = (**(code **)*puVar1)(puVar1);
    uVar3 = 0;
    if (-1 < iVar2) {
      piVar5 = (int *)0x7;
      unaff_ESI[0xe] = *(undefined4 *)*unaff_ESI;
      (**(code **)(*piStack_78 + 0x20))(piStack_78,7,&fStack_44);
      piVar4 = (int *)0x7;
      unaff_ESI[0xe] = 0;
      (**(code **)(*piVar5 + 0x20))(piVar5,7,auStack_34);
      unaff_ESI[0xe] = fStack_20;
      (**(code **)(*piVar4 + 0x20))(piVar4,7,&piStack_78);
      *(float *)(unaff_EDI + 0x24) = (fStack_44 + fStack_60) - fStack_28;
      *(float *)(unaff_EDI + 0x28) = (fStack_40 + fStack_5c) - fStack_24;
      *(float *)(unaff_EDI + 0x2c) = (fStack_3c + fStack_58) - fStack_20;
      FUN_002333b0(auStack_54);
      puVar1 = (undefined4 *)unaff_ESI[1];
      if (puVar1 != (undefined4 *)0x0) {
        local_6c = 0xffffffff;
        puStack_74 = (undefined1 *)0xffe3b4c4;
        auStack_8[0] = 0;
        (**(code **)*puVar1)(puVar1,&stack0xffffff90,1,&puStack_74,auStack_8);
      }
      uVar3 = 1;
    }
    if (piStack_78 != (int *)0x0) {
      (**(code **)(*piStack_78 + 8))(piStack_78);
    }
  }
  return uVar3;
}
