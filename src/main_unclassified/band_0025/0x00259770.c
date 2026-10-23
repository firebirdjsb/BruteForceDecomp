/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 439D768AB87AC8424124CBFC72CE93E881439C3A184F655C6610AE892BED0712
 * Entry: 0x00259770, Ghidra index: 8504, label: FUN_00259770
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00259770(void)

{
  uint *in_EAX;
  uint *unaff_EBX;
  int *unaff_ESI;
  byte bStack_15;
  undefined1 local_5 [5];
  
  (**(code **)(*unaff_ESI + 0x10))();
  bStack_15 = (byte)((uint)local_5 >> 0x18);
  *in_EAX = (uint)(bStack_15 >> 5);
  *unaff_EBX = bStack_15 & 0x1f;
  if (*in_EAX == 7) {
    (**(code **)(*unaff_ESI + 0x10))();
    *in_EAX = (int)(char)bStack_15;
  }
  if (*unaff_EBX == 0x1f) {
    FUN_00252ca0();
    *unaff_EBX = 1;
  }
  return;
}
