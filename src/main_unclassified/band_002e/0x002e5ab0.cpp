/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 75B20CF854C673C3B5F47D6189BBCCF4D70988621E6F34BF45EC1690CC290854
 * Entry: 0x002e5ab0, Ghidra index: 10486, label: FUN_002e5ab0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040e88c;
extern uint32_t PTR_FUN_003868c0;
extern uint32_t PTR_FUN_0039f74c;
extern uint32_t PTR_FUN_003a1a68;
extern uint32_t PTR_LAB_003868ac;
extern uint32_t PTR_LAB_003868b4;
void FUN_002e5ab0(void)

{
  undefined4 *in_ECX;
  int iVar1;
  
  in_ECX[1] = PTR_FUN_003a1a68;
  in_ECX[2] = PTR_FUN_0039f74c;
  *in_ECX = PTR_FUN_003868c0;
  in_ECX[1] = PTR_LAB_003868b4;
  in_ECX[2] = PTR_LAB_003868ac;
  in_ECX[3] = 0;
  iVar1 = 0x1e;
  do {
    FUN_002e4f30();
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  DAT_0040e88c = in_ECX;
  in_ECX[10] = 0;
  return;
}
