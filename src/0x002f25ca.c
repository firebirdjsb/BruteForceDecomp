/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 979DC6E415A659B6FC25DAA520CF7415EC1CE8196A497EEE36450FEA77853EB7
 * Entry: 0x002f25ca, Ghidra index: 10801, label: XNetGetEthernetLinkStatus
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040f5b4;
uint XONLINES__XNetGetEthernetLinkStatus(void)

{
  uint uVar1;
  int unaff_FS_OFFSET;
  
  KeRaiseIrqlToDpcLevel();
  if ((DAT_0040f5b4 == 0) && (*(int *)(*(int *)(unaff_FS_OFFSET + 0x20) + 0x24c) == 0)) {
    PhyInitialize(0,0);
  }
  uVar1 = PhyGetLinkState(0);
  KfLowerIrql();
  return -(uint)((uVar1 & 1) != 0) & uVar1;
}
