/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 43656E84D683CDE766F4FD94C7FB59BCD845CA87BA3B98194CDDD61FD5DB37B9
 * Entry: 0x0010a280, Ghidra index: 3424, label: FUN_0010a280
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0010a280(void)

{
  int in_EAX;
  
  if (CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(in_EAX + 0x93),*(undefined1 *)(in_EAX + 0x90)),
                        *(undefined1 *)(in_EAX + 0x91)),*(undefined1 *)(in_EAX + 0x92)) != 0) {
    FUN_000ee6e0(in_EAX,0,0,*(undefined4 *)(in_EAX + 0x14),*(undefined4 *)(in_EAX + 0x18),
                 (undefined1 *)(in_EAX + 0x90),0xf83fc948,0);
  }
  return;
}
