/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 251830337DB1851D6DE041A75FBA1FD11C67CA504E225DE4E1CB21E46E70307C
 * Entry: 0x00316c07, Ghidra index: 12159, label: FUN_00316c07
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00386a20;
void FUN_00316c07(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  int iVar3;
  uint uVar4;
  
  FUN_003187e9(param_1,param_2);
  *in_ECX = &PTR_FUN_00386a20;
  uVar1 = FUN_00316bf2(param_2);
  in_ECX[0x22] = uVar1;
  puVar2 = in_ECX + 0x2e;
  in_ECX[0x2f] = puVar2;
  *puVar2 = puVar2;
  puVar2 = in_ECX + 0x2c;
  in_ECX[0x2d] = puVar2;
  *puVar2 = puVar2;
  puVar2 = in_ECX + 0x30;
  iVar3 = 2;
  in_ECX[0x31] = puVar2;
  *puVar2 = puVar2;
  puVar2 = in_ECX + 0x24;
  do {
    puVar2[1] = puVar2;
    *puVar2 = puVar2;
    puVar2 = puVar2 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  uVar4 = 0;
  puVar2 = in_ECX + 0x36;
  do {
    puVar2[4] = uVar4;
    puVar2[1] = puVar2;
    *puVar2 = puVar2;
    puVar2[3] = in_ECX;
    uVar4 = uVar4 + 1;
    puVar2 = puVar2 + 8;
  } while (uVar4 < 6);
  in_ECX[0x38] = in_ECX[0x38] | 5;
  in_ECX[0x40] = in_ECX[0x40] | 1;
  in_ECX[0x48] = in_ECX[0x48] | 5;
  in_ECX[0x50] = in_ECX[0x50] | 5;
  FUN_00318d9f();
  return;
}
