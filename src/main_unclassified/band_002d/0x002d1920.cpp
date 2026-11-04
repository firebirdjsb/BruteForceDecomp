/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0E08AF4579378C6442998385890C39BD4B35C98E072706C500E22E23BEB489D6
 * Entry: 0x002d1920, Ghidra index: 10189, label: FUN_002d1920
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Existing Ghidra callee draft declarations only; implicit guest registers ABI_UNVERIFIED. */
extern void FUN_002b3c60(void);
extern void FUN_002ce3a0(void);
void FUN_002d1920(int param_1,undefined4 param_2,undefined4 param_3)

{
  int in_ECX;
  
  FUN_002b3c60();
  *(undefined4 *)(in_ECX + 0x44 + param_1 * 4) = param_2;
  *(undefined4 *)(in_ECX + 0x2c + param_1 * 4) = 2;
  *(undefined4 *)(in_ECX + 0x5c + param_1 * 4) = param_3;
  FUN_002ce3a0();
  return;
}
