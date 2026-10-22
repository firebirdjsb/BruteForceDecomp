/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 595F8F8A03E89D9CF1DF51773C5889E8BED966701B140D415E8CC556C479417D
 * Entry: 0x001d2f50, Ghidra index: 6309, label: FUN_001d2f50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_001d2f50(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *in_EAX;
  
  FUN_001acfe0();
  puVar1 = (undefined4 *)*in_EAX;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*param_1;
    *puVar2 = *puVar1;
    FUN_001cd500();
    puVar2[5] = puVar1[5];
    *(undefined1 *)(puVar2 + 6) = *(undefined1 *)(puVar1 + 6);
    *(undefined1 *)((int)puVar2 + 0x19) = *(undefined1 *)((int)puVar1 + 0x19);
  }
  FUN_001ad030();
  puVar1 = (undefined4 *)in_EAX[1];
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)param_1[1];
    *puVar2 = *puVar1;
    FUN_0010bc40();
    puVar2[5] = puVar1[5];
    *(undefined1 *)(puVar2 + 6) = *(undefined1 *)(puVar1 + 6);
    *(undefined1 *)((int)puVar2 + 0x19) = *(undefined1 *)((int)puVar1 + 0x19);
  }
  FUN_001ad080(param_1 + 2);
  if (in_EAX[2] != 0) {
    FUN_001cd420(in_EAX[2]);
  }
  FUN_001d4970(in_EAX + 3);
  FUN_000fdbf0();
  if (in_EAX[7] != 0) {
    FUN_000fdb40(in_EAX[7]);
  }
  FUN_001ad2a0();
  if (in_EAX[8] != 0) {
    FUN_001cd4a0(in_EAX[8]);
  }
  FUN_001d4b20(in_EAX + 9);
  FUN_001d4c80(in_EAX + 0xd);
  FUN_001d4e20(in_EAX + 0x11);
  FUN_001d4fc0(in_EAX + 0x15);
  FUN_001d5160(in_EAX + 0x19);
  return param_1;
}
