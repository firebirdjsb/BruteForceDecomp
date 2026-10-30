/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4246D54C46F08F74E219EB0AEAD98DBF5C8F0AB94974BC53E54E9515AB41810D
 * Entry: 0x00051850, Ghidra index: 748, label: FUN_00051850
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000519a0(void);

void FUN_00051850(void)

{
  int in_EAX;
  int unaff_EBX;
  
  for (; in_EAX != unaff_EBX; in_EAX = in_EAX + 8) {
    FUN_000519a0();
  }
  return;
}
