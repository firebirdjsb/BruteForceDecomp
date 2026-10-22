/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DA429D34F7A6F1A11DFADC3D99C400980D14326206A74440C40EF9BAB852753A
 * Entry: 0x0025d900, Ghidra index: 8575, label: FUN_0025d900
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00393028;
extern uint32_t PTR_LAB_00393018;
extern uint32_t PTR_LAB_003930e4;
void FUN_0025d900(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_EAX;
  int unaff_ESI;
  
  FUN_0025bfb0();
  *in_EAX = &PTR_FUN_00393028;
  in_EAX[1] = &PTR_LAB_00393018;
  puVar1 = in_EAX + 0xd;
  *puVar1 = &PTR_LAB_003930e4;
  in_EAX[0xe] = 1;
  in_EAX[0xf] = in_EAX;
  iVar2 = *(int *)(unaff_ESI + 8);
  in_EAX[0xc] = iVar2;
  if (iVar2 == 0) {
    in_EAX[0xc] = puVar1;
    return;
  }
  **(int **)(unaff_ESI + 0xc) = (int)puVar1;
  return;
}
