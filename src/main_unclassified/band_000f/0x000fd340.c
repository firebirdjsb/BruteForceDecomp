/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E9DDBC200A87C94EF4705A9BC32D2AFBA279652625896CD407C3EE1A4CBF6DD8
 * Entry: 0x000fd340, Ghidra index: 3163, label: FUN_000fd340
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
uint FUN_000fd340(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int unaff_ESI;
  
  uVar3 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x88))(param_1);
  if ((uVar3 != 0) && (unaff_ESI != 0)) {
    FUN_000fbe60();
    if (*(int *)(uVar3 + 0x24) != 0) {
      FUN_0010ad40(unaff_ESI + 200);
    }
    puVar1 = *(undefined4 **)(uVar3 + 0x28);
    if (puVar1 != (undefined4 *)0x0) {
      uVar2 = puVar1[1];
      *(undefined4 *)(unaff_ESI + 0x1d8) = *puVar1;
      *(undefined4 *)(unaff_ESI + 0x1dc) = uVar2;
    }
    if (*(undefined4 **)(uVar3 + 0x2c) != (undefined4 *)0x0) {
      *(undefined4 *)(unaff_ESI + 0x9c) = **(undefined4 **)(uVar3 + 0x2c);
    }
    if (*(undefined4 **)(uVar3 + 0x30) != (undefined4 *)0x0) {
      *(undefined4 *)(unaff_ESI + 0xa4) = **(undefined4 **)(uVar3 + 0x30);
    }
    if (*(undefined4 **)(uVar3 + 0x34) != (undefined4 *)0x0) {
      *(undefined4 *)(unaff_ESI + 0xa0) = **(undefined4 **)(uVar3 + 0x34);
    }
    if (*(undefined4 **)(uVar3 + 0x14) != (undefined4 *)0x0) {
      *(undefined4 *)(unaff_ESI + 0x92) = **(undefined4 **)(uVar3 + 0x14);
    }
    puVar1 = *(undefined4 **)(uVar3 + 0x18);
    uVar3 = 0;
    if (puVar1 != (undefined4 *)0x0) {
      uVar3 = (uint)puVar1 & 0xffffff00;
      *(undefined4 *)(unaff_ESI + 0x92) = *puVar1;
    }
  }
  return uVar3 & 0xffffff00;
}
