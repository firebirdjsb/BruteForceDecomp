/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0FCB2ED757FEF419120FC997559855A51B6DE61189B8802CF168C26D13F5751B
 * Entry: 0x001fa680, Ghidra index: 7088, label: FUN_001fa680
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00396530;
extern uint32_t PTR_LAB_0039644c;
extern uint32_t PTR_LAB_00396500;
extern uint32_t PTR_LAB_00396518;
extern uint32_t PTR_LAB_00396698;
extern uint32_t PTR_LAB_003966a8;
void FUN_001fa680(void)

{
  undefined4 *unaff_ESI;
  undefined1 local_4 [4];
  
  FUN_001f89b0(local_4);
  unaff_ESI[0x46] = 0x40a00000;
  *unaff_ESI = &PTR_FUN_00396530;
  unaff_ESI[2] = &PTR_LAB_00396518;
  unaff_ESI[3] = &PTR_LAB_003966a8;
  unaff_ESI[0x10] = &PTR_LAB_00396500;
  unaff_ESI[0x11] = &PTR_LAB_00396698;
  unaff_ESI[0x1f] = &PTR_LAB_0039644c;
  unaff_ESI[0x48] = 0;
  unaff_ESI[0x49] = 0;
  unaff_ESI[0x47] = unaff_ESI;
  unaff_ESI[0x4a] = 1;
  return;
}
