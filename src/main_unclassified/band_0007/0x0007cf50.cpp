/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 06FA744A16B487A2F9AC50610ABBF5F0D21C6514C275EAEE92FEA4243C85BA4F
 * Entry: 0x0007cf50, Ghidra index: 1485, label: FUN_0007cf50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_001ed550(void);

extern uint32_t DAT_0046995c;
undefined4 FUN_0007cf50(int param_1)

{
  int iVar1;
  int *in_ECX;
  
  if (param_1 != 9) {
    if (*(int *)(DAT_0046995c + 0x1c) != 0) {
      FUN_001ed550();
      return 1;
    }
    iVar1 = (**(code **)(*in_ECX + 0x130))(param_1);
    if (iVar1 != 0) {
      (**(code **)(*in_ECX + 0x128))(iVar1);
      return 1;
    }
  }
  return 0;
}
