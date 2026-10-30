/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0535B45D5EA72F331B854A52E92ABF1D34F2AF21FDB1CF703304E4DCF166C13B
 * Entry: 0x000b3c30, Ghidra index: 2170, label: FUN_000b3c30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint FUN_000db3e0(int *param_1);
extern void FUN_0008f6a0(std::uint32_t guest_esi, std::uint32_t guest_word_0);
extern void FUN_0008f6e0(std::uint32_t guest_edx);

extern uint32_t PTR_FUN_0039f8bc;
extern uint32_t PTR_FUN_0039fe74;
void FUN_000b3c30(void)

{
  int *piVar1;
  undefined4 *in_ECX;
  
  *in_ECX = PTR_FUN_0039fe74;
  if ((in_ECX[0xd] != 0) && (FUN_000db3e0(in_ECX[0xd]), in_ECX[0xd] != 0)) {
    FUN_0008f6a0(0);
  }
  if (in_ECX[0xd] != 0) {
    FUN_0008f6e0();
  }
  piVar1 = (int *)in_ECX[0xb];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[0xb] = 0;
  }
  *in_ECX = &PTR_FUN_0039f8bc;
  piVar1 = (int *)in_ECX[8];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[8] = 0;
  }
  return;
}
