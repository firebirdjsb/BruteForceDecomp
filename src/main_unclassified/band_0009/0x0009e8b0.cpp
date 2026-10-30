/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DF8B2B59C7E5CB3BB4DAD4292BF9D9093E7F6F538F58874E0129A38FBF898545
 * Entry: 0x0009e8b0, Ghidra index: 1878, label: FUN_0009e8b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched declaration of FUN_00310440; callback ABI and behavior remain
 * ABI_UNVERIFIED. This only resolves name lookup in the C11 draft. */
extern void FUN_00310440(void);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a745c;
extern uint32_t DAT_004a748c;
extern uint32_t UNK_0038def0;
extern uint32_t UNK_0038def4;
extern uint32_t UNK_0038df04;
extern uint32_t _DAT_004a745c;
extern uint32_t _DAT_004a7460;
extern uint32_t _DAT_004a7464;
extern uint32_t _DAT_004a7468;
extern uint32_t _DAT_004a746c;
extern uint32_t _DAT_004a7470;
extern uint32_t _DAT_004a7474;
extern uint32_t _DAT_004a7478;
extern uint32_t _DAT_004a747c;
extern uint32_t _DAT_004a7480;
extern uint32_t _DAT_004a7484;
extern uint32_t _DAT_004a7488;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0009e8b0(void)

{
  undefined4 *unaff_ESI;
  
  if ((DAT_004a748c & 1) == 0) {
    DAT_004a748c = DAT_004a748c | 1;
    _DAT_004a7470 = &UNK_0038df04;
    _DAT_004a746c = &UNK_0038df04;
    _DAT_004a745c = 0xedca4b16;
    _DAT_004a7460 = 0xeee373be;
    _DAT_004a7468 = &UNK_0038def4;
    _DAT_004a7464 = 0x10;
    _DAT_004a7474 = 0xe59d69a0;
    _DAT_004a7478 = 0xeee373be;
    _DAT_004a7488 = &UNK_0038def0;
    _DAT_004a7480 = &UNK_0038def4;
    _DAT_004a7484 = &UNK_0038def0;
    _DAT_004a747c = 0;
    _atexit(FUN_00310440);
  }
  if (unaff_ESI != (undefined4 *)0x0) {
    *unaff_ESI = &DAT_004a745c;
  }
  return 2;
}
