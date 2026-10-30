/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DFF47F59EA4D59F846CEBC2A938B7C6F3E785D6EBF7F2AB5DEBF06FFE7DAEC3F
 * Entry: 0x000be3a0, Ghidra index: 2318, label: FUN_000be3a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint FUN_000db3e0(int *param_1);
extern void FUN_0008f6e0(std::uint32_t guest_edx);
extern void FUN_000b2530(void);

extern uint32_t DAT_00469aac;
extern uint32_t PTR_FUN_0039f7a0;
extern uint32_t PTR_FUN_0039f8bc;
extern uint32_t PTR_FUN_0039ffc0;
extern uint32_t PTR_LAB_0039f78c;
extern uint32_t PTR_LAB_0039fff0;
void FUN_000be3a0(void)

{
  int *piVar1;
  undefined4 *in_ECX;
  bool bVar2;
  
  bVar2 = DAT_00469aac != 0;
  *in_ECX = &PTR_FUN_0039f7a0;
  in_ECX[0xb] = &PTR_LAB_0039f78c;
  if (bVar2) {
    if (in_ECX[0x21] != 0) {
      FUN_000db3e0(in_ECX[0x21]);
    }
    if (in_ECX[0x23] != 0) {
      FUN_000db3e0(in_ECX[0x23]);
    }
  }
  if (in_ECX[0x23] != 0) {
    FUN_0008f6e0();
  }
  if (in_ECX[0x21] != 0) {
    FUN_0008f6e0();
  }
  *in_ECX = &PTR_FUN_0039ffc0;
  in_ECX[0xb] = &PTR_LAB_0039fff0;
  FUN_000b2530();
  *in_ECX = &PTR_FUN_0039f8bc;
  piVar1 = (int *)in_ECX[8];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[8] = 0;
  }
  return;
}
