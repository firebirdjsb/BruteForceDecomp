/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 65093D604A76A4DE87F8FC644712FD3066228542DFD51CA6C6F49B8345B146C1
 * Entry: 0x003193d4, Ghidra index: 12222, label: FUN_003193d4
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00386a68;
void FUN_003193d4(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  uint uVar3;
  
  FUN_003187e9(param_1,param_2);
  *in_ECX = &PTR_FUN_00386a68;
  uVar1 = FUN_00316bf2(param_2);
  in_ECX[0x22] = uVar1;
  uVar3 = 0;
  puVar2 = in_ECX + 0x24;
  do {
    puVar2[4] = uVar3;
    puVar2[1] = puVar2;
    *puVar2 = puVar2;
    puVar2[3] = in_ECX;
    uVar3 = uVar3 + 1;
    puVar2 = puVar2 + 8;
  } while (uVar3 < 6);
  in_ECX[0x26] = in_ECX[0x26] | 5;
  in_ECX[0x2e] = in_ECX[0x2e] | 5;
  in_ECX[0x36] = in_ECX[0x36] | 5;
  return;
}
