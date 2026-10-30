/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F7600D51506746D8F81715D161443D1558435FA956A88E9A1A49439CCE789A94
 * Entry: 0x003187e9, Ghidra index: 12203, label: FUN_003187e9
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00386a44;
void FUN_003187e9(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  
  in_ECX[1] = 1;
  *in_ECX = &PTR_FUN_00386a44;
  in_ECX[0x1a] = 0;
  in_ECX[0x1b] = 0;
  uVar2 = FUN_00316bf2(param_1);
  in_ECX[2] = uVar2;
  uVar2 = FUN_00316bf2(param_2);
  *(undefined1 *)((int)in_ECX + 0x65) = 0xff;
  in_ECX[0x1e] = uVar2;
  puVar1 = in_ECX + 0x13;
  in_ECX[0x14] = puVar1;
  *puVar1 = puVar1;
  puVar1 = in_ECX + 0x15;
  in_ECX[0x16] = puVar1;
  *puVar1 = puVar1;
  puVar1 = in_ECX + 0x17;
  in_ECX[0x18] = puVar1;
  *puVar1 = puVar1;
  puVar1 = in_ECX + 0x11;
  in_ECX[0x1f] = 0;
  in_ECX[0x12] = puVar1;
  *puVar1 = puVar1;
  in_ECX[3] = 0xffffffff;
  *(undefined2 *)(in_ECX + 4) = 0xffff;
  return;
}
