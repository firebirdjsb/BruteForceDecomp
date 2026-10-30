/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1BEEAB4AFEBD2999DC549875FDB97016820D2EFE4F2E97C39C016A4B9DF0772B
 * Entry: 0x00109f80, Ghidra index: 3419, label: FUN_00109f80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039e0c0;
undefined4 * FUN_00109f80(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  FUN_000ee640();
  *param_1 = &PTR_FUN_0039e0c0;
  param_1[0x1e] = 7;
  param_1[0x1d] = 0;
  *(undefined2 *)(param_1 + 0x19) = 0;
  uVar1 = FUN_00061500(param_1 + 0x1f);
  param_1[0x20] = uVar1;
  param_1[0x21] = 0;
  param_1[0x26] = 0;
  puVar2 = param_1 + 0x2c;
  iVar3 = 2;
  do {
    *puVar2 = 0xff000000;
    puVar2[1] = 0xffffffff;
    puVar2[2] = 0x3f800000;
    puVar2[3] = 0;
    puVar2[4] = 0x3f800000;
    puVar2[5] = 2;
    puVar2 = puVar2 + 6;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  param_1[0x3c] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x26] = 0xc626fd5;
  param_1[0x27] = 0xe;
  uVar1 = FUN_000cd9c0();
  param_1[0x3c] = uVar1;
  FUN_0010ae40(0x3f000000,0x40400000);
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x3b] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  return param_1;
}
