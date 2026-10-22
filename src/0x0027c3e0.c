/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C06C8DD4878EAABB287D3AB724771341B860854D375610D2890830C02BF5D4E0
 * Entry: 0x0027c3e0, Ghidra index: 8975, label: FUN_0027c3e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00391d40;
extern uint32_t PTR_FUN_00399efc;
extern uint32_t PTR_FUN_0039c2a0;
extern uint32_t PTR_LAB_00391c60;
extern uint32_t PTR_LAB_00391d04;
extern uint32_t PTR_LAB_00391d1c;
void FUN_0027c3e0(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_EAX;
  int unaff_ESI;
  
  in_EAX[1] = &PTR_FUN_00399efc;
  in_EAX[2] = &PTR_FUN_0039c2a0;
  in_EAX[3] = 0;
  *in_EAX = &PTR_FUN_00391d40;
  in_EAX[1] = &PTR_LAB_00391d1c;
  in_EAX[2] = &PTR_LAB_00391d04;
  puVar1 = in_EAX + 0x1d;
  *puVar1 = &PTR_LAB_00391c60;
  in_EAX[0x1e] = 1;
  in_EAX[0x1f] = in_EAX;
  iVar2 = *(int *)(unaff_ESI + 8);
  in_EAX[0x1c] = iVar2;
  if (iVar2 == 0) {
    in_EAX[0x1c] = puVar1;
    return;
  }
  **(int **)(unaff_ESI + 0xc) = (int)puVar1;
  return;
}
