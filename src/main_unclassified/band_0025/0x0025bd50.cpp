/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A40C381CF72B4B50AB316CF2079A43553BE3C1484D8EA2AB7EA52896561FD020
 * Entry: 0x0025bd50, Ghidra index: 8547, label: FUN_0025bd50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003931b0;
extern uint32_t PTR_LAB_003931a4;
extern uint32_t PTR_LAB_003931e4;
extern uint32_t PTR_LAB_00393208;
void FUN_0025bd50(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_EAX;
  int unaff_ESI;
  
  in_EAX[1] = PTR_FUN_003931b0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  in_EAX[2] = 0xffffffff;
  *in_EAX = PTR_LAB_00393208;
  in_EAX[1] = PTR_LAB_003931e4;
  puVar1 = in_EAX + 6;
  *puVar1 = PTR_LAB_003931a4;
  in_EAX[7] = 1;
  in_EAX[8] = *in_EAX;
  iVar2 = *(int *)(unaff_ESI + 8);
  in_EAX[5] = iVar2;
  if (iVar2 == 0) {
    in_EAX[5] = *puVar1;
    return;
  }
  **(int **)(unaff_ESI + 0xc) = (int)puVar1;
  return;
}
