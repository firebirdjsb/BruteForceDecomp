/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1F39B492DFDB1D36BD01A9364D615D1489DB8F73E087A050F769B738BB9CBB5F
 * Entry: 0x001ec070, Ghidra index: 6905, label: FUN_001ec070
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
void FUN_001ec070(void)

{
  int unaff_ESI;
  
  *(undefined4 *)(unaff_ESI + 0x1c) = 0;
  *(undefined1 *)(unaff_ESI + 0x20) = 0;
  *(undefined4 *)(unaff_ESI + 0x24) = 0;
  *(undefined1 *)(unaff_ESI + 0xa0) = 0;
  *(undefined1 *)(unaff_ESI + 0xa1) = 0;
  *(undefined4 *)(unaff_ESI + 0xa4) = 0x80000013;
  *(undefined4 *)(unaff_ESI + 0xa8) = 0;
  FUN_001ed360();
  FUN_001ed310();
  FUN_001ed3a0();
  *(undefined1 *)(unaff_ESI + 0x2e24) = 1;
  *(undefined1 *)(unaff_ESI + 0x2e25) = 0;
  *(undefined1 *)(unaff_ESI + 0x2e26) = 0;
  *(undefined1 *)(unaff_ESI + 0x2e27) = 0;
  *(undefined1 *)(unaff_ESI + 0x2e2c) = 0;
  *(undefined4 *)(unaff_ESI + 0x2e1c) = 0xffffffff;
  *(undefined4 *)(unaff_ESI + 0x2e20) = 0xffffffff;
  *(undefined4 *)(unaff_ESI + 0x2e28) = 0xffffffff;
  *(undefined4 *)(unaff_ESI + 0x5710) = 0;
  *(undefined4 *)(unaff_ESI + 0x5714) = 0;
  *(undefined4 *)(unaff_ESI + 0x5718) = 0;
  *(undefined4 *)(unaff_ESI + 0x571c) = 0;
  *(undefined4 *)(unaff_ESI + 0x5720) = 0;
  *(undefined4 *)(unaff_ESI + 0x5724) = 0;
  *(undefined4 *)(unaff_ESI + 0x5738) = 0xffffffff;
  *(undefined4 *)(unaff_ESI + 0x5740) = 0;
  *(undefined4 *)(unaff_ESI + 0x5744) = 0;
  *(undefined4 *)(unaff_ESI + 0x5748) = 0;
  *(undefined4 *)(unaff_ESI + 0x574c) = 0;
  *(undefined4 *)(unaff_ESI + 0x5750) = 0;
  *(undefined4 *)(unaff_ESI + 0x5754) = 0;
  *(undefined4 *)(unaff_ESI + 0x5768) = 9;
  *(undefined4 *)(unaff_ESI + 0x576c) = DAT_0046d064;
  *(undefined1 *)(unaff_ESI + 0x5770) = 0;
  *(undefined1 *)(unaff_ESI + 0x5771) = 0;
  *(undefined4 *)(unaff_ESI + 0x24) = 0;
  if ((*(int *)(unaff_ESI + 0x18) != 0) && (*(int *)(*(int *)(unaff_ESI + 0x18) + 0x4898) == 5)) {
    FUN_002e7070(0);
  }
  return;
}
