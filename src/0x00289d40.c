/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3B77580564DAE38A45DBF2A08A687AA24E466066796B7E1426B8EC8DFC36ECCC
 * Entry: 0x00289d40, Ghidra index: 9147, label: FUN_00289d40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469888;
void FUN_00289d40(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *in_EAX;
  
  puVar2 = DAT_00469888;
  puVar1 = (undefined4 *)*DAT_00469888;
  *puVar1 = *in_EAX;
  puVar1[1] = in_EAX[1];
  puVar1[2] = in_EAX[2];
  puVar1[3] = in_EAX[3];
  if (puVar2[2] <= *puVar2) {
    FUN_0028a460();
    *DAT_00469888 = *DAT_00469888 + 0x10;
    return;
  }
  *puVar2 = *puVar2 + 0x10;
  return;
}
