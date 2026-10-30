/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 12CF1A577A2C637D05049159D9DC3EB520BE344AD165312255F6DE1CE1654A4D
 * Entry: 0x000ff280, Ghidra index: 3192, label: FUN_000ff280
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
void FUN_000ff280(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  
  if (*param_1 == DAT_0046d064) {
    FUN_000fddf0(in_ECX);
    return;
  }
  iVar1 = *in_ECX;
  uVar2 = FUN_001e97c0(param_2,param_3);
  (**(code **)(iVar1 + 0xc))(uVar2);
  return;
}
