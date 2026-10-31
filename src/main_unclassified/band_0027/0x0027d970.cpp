/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CCF3AE05440E06BD09413EAFC0C062BF521833AEA90BDC88231F2F8349BEE753
 * Entry: 0x0027d970, Ghidra index: 9003, label: FUN_0027d970
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched C++17 declaration only; original Xbox ABI_UNVERIFIED. */
extern void FUN_0027d3f0(int param_1);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0038ce84;
void FUN_0027d970(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(in_EAX + 0x16b4);
  if (iVar2 < 0xc) {
    *(ushort *)(in_EAX + 0x16b0) =
         *(ushort *)(in_EAX + 0x16b0) | (ushort)(param_1 + -0x101 << ((byte)iVar2 & 0x1f));
    *(int *)(in_EAX + 0x16b4) = iVar2 + 5;
  }
  else {
    *(ushort *)(in_EAX + 0x16b0) =
         *(ushort *)(in_EAX + 0x16b0) | (ushort)(param_1 + -0x101 << ((byte)iVar2 & 0x1f));
    *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
         *(undefined1 *)(in_EAX + 0x16b0);
    iVar2 = *(int *)(in_EAX + 0x14) + 1;
    *(int *)(in_EAX + 0x14) = iVar2;
    *(undefined1 *)(iVar2 + *(int *)(in_EAX + 8)) = *(undefined1 *)(in_EAX + 0x16b1);
    iVar2 = *(int *)(in_EAX + 0x16b4);
    *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
    *(int *)(in_EAX + 0x16b4) = iVar2 + -0xb;
    *(ushort *)(in_EAX + 0x16b0) = (ushort)(param_1 + -0x101) >> (0x10U - (char)iVar2 & 0x1f);
  }
  iVar2 = *(int *)(in_EAX + 0x16b4);
  if (iVar2 < 0xc) {
    *(ushort *)(in_EAX + 0x16b0) =
         *(ushort *)(in_EAX + 0x16b0) | (ushort)(param_2 + -1 << ((byte)iVar2 & 0x1f));
    *(int *)(in_EAX + 0x16b4) = iVar2 + 5;
  }
  else {
    *(ushort *)(in_EAX + 0x16b0) =
         *(ushort *)(in_EAX + 0x16b0) | (ushort)(param_2 + -1 << ((byte)iVar2 & 0x1f));
    *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
         *(undefined1 *)(in_EAX + 0x16b0);
    iVar2 = *(int *)(in_EAX + 0x14) + 1;
    *(int *)(in_EAX + 0x14) = iVar2;
    *(undefined1 *)(iVar2 + *(int *)(in_EAX + 8)) = *(undefined1 *)(in_EAX + 0x16b1);
    iVar2 = *(int *)(in_EAX + 0x16b4);
    *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
    *(int *)(in_EAX + 0x16b4) = iVar2 + -0xb;
    *(ushort *)(in_EAX + 0x16b0) = (ushort)(param_2 + -1) >> (0x10U - (char)iVar2 & 0x1f);
  }
  iVar2 = *(int *)(in_EAX + 0x16b4);
  if (iVar2 < 0xd) {
    *(ushort *)(in_EAX + 0x16b0) =
         *(ushort *)(in_EAX + 0x16b0) | (ushort)(param_3 + -4 << ((byte)iVar2 & 0x1f));
    *(int *)(in_EAX + 0x16b4) = iVar2 + 4;
  }
  else {
    *(ushort *)(in_EAX + 0x16b0) =
         *(ushort *)(in_EAX + 0x16b0) | (ushort)(param_3 + -4 << ((byte)iVar2 & 0x1f));
    *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
         *(undefined1 *)(in_EAX + 0x16b0);
    iVar2 = *(int *)(in_EAX + 0x14) + 1;
    *(int *)(in_EAX + 0x14) = iVar2;
    *(undefined1 *)(iVar2 + *(int *)(in_EAX + 8)) = *(undefined1 *)(in_EAX + 0x16b1);
    iVar2 = *(int *)(in_EAX + 0x16b4);
    *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
    *(int *)(in_EAX + 0x16b4) = iVar2 + -0xc;
    *(ushort *)(in_EAX + 0x16b0) = (ushort)(param_3 + -4) >> (0x10U - (char)iVar2 & 0x1f);
  }
  iVar2 = 0;
  if (0 < param_3) {
    do {
      iVar3 = *(int *)(in_EAX + 0x16b4);
      if (iVar3 < 0xe) {
        *(ushort *)(in_EAX + 0x16b0) =
             *(ushort *)(in_EAX + 0x16b0) |
             *(short *)(in_EAX + 0xa76 + (uint)(byte)(&DAT_0038ce84)[iVar2] * 4) <<
             ((byte)iVar3 & 0x1f);
        *(int *)(in_EAX + 0x16b4) = iVar3 + 3;
      }
      else {
        uVar1 = *(ushort *)(in_EAX + 0xa76 + (uint)(byte)(&DAT_0038ce84)[iVar2] * 4);
        *(ushort *)(in_EAX + 0x16b0) = *(ushort *)(in_EAX + 0x16b0) | uVar1 << ((byte)iVar3 & 0x1f);
        *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
             *(undefined1 *)(in_EAX + 0x16b0);
        iVar3 = *(int *)(in_EAX + 0x14) + 1;
        *(int *)(in_EAX + 0x14) = iVar3;
        *(undefined1 *)(iVar3 + *(int *)(in_EAX + 8)) = *(undefined1 *)(in_EAX + 0x16b1);
        iVar3 = *(int *)(in_EAX + 0x16b4);
        *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
        *(int *)(in_EAX + 0x16b4) = iVar3 + -0xd;
        *(ushort *)(in_EAX + 0x16b0) = uVar1 >> (0x10U - (char)iVar3 & 0x1f);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_3);
  }
  FUN_0027d3f0(param_1 + -1);
  FUN_0027d3f0(param_2 + -1);
  return;
}
