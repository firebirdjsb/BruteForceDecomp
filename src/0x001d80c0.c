/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D534555DF68FF0CA29D38FDD36F2B9FCCA2195589374DDBFE013A494E182DB52
 * Entry: 0x001d80c0, Ghidra index: 6418, label: FUN_001d80c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d80c0(int *param_1,int param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_2 != param_3) {
    puVar1 = (undefined4 *)(param_3 + 9);
    puVar2 = (undefined4 *)(param_4 + 9);
    do {
      *(undefined4 *)(param_4 + -0x1c) = *(undefined4 *)(param_3 + -0x1c);
      param_3 = param_3 + -0x1c;
      param_4 = param_4 + -0x1c;
      *(undefined4 *)((int)puVar2 + -0x21) = *(undefined4 *)((int)puVar1 + -0x21);
      *(undefined1 *)((int)puVar2 + -0x1d) = *(undefined1 *)((int)puVar1 + -0x1d);
      puVar2[-7] = puVar1[-7];
      *(undefined1 *)(puVar2 + -6) = *(undefined1 *)(puVar1 + -6);
      *(undefined4 *)((int)puVar2 + -0x15) = *(undefined4 *)((int)puVar1 + -0x15);
      *(undefined4 *)((int)puVar2 + -0x11) = *(undefined4 *)((int)puVar1 + -0x11);
      *(undefined4 *)((int)puVar2 + -0xd) = *(undefined4 *)((int)puVar1 + -0xd);
      puVar1 = puVar1 + -7;
      puVar2 = puVar2 + -7;
    } while (param_3 != param_2);
    *param_1 = param_4;
    return;
  }
  *param_1 = param_4;
  return;
}
