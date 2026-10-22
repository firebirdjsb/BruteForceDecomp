/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 94AA43476A6CE56EEEE041063CEC1B20F0BD85E93ED2CB545F0EF76BA3726126
 * Entry: 0x0022b5b0, Ghidra index: 7687, label: FUN_0022b5b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046cfd8;
extern uint32_t DAT_0046d064;
void FUN_0022b5b0(int param_1)

{
  int iVar1;
  int in_EAX;
  int in_ECX;
  
  DAT_0046cfd8 = DAT_0046cfd8 * 0x19660d + 0x3c6ef35f;
  iVar1 = *(int *)(*(int *)(in_ECX + 0xc) + *(int *)(in_EAX + 0x2c4) * 0x18 + 0x28 +
                  (DAT_0046cfd8 & 3) * 4);
  if (iVar1 != DAT_0046d064) {
    FUN_0003f010();
    FUN_00179250(*(undefined4 *)(param_1 + 0x208),iVar1,6);
  }
  return;
}
