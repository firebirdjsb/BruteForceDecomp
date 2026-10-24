/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5F28497663216A096BD5FB27543595E3C6DAA80E081296C4063F10C410E277BC
 * Entry: 0x0010bb70, Ghidra index: 3449, label: FUN_0010bb70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0010bb70(void)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int in_EAX;
  undefined4 local_4;
  
  if (*(int *)(in_EAX + 0x14) != 0) {
    uVar1 = *(undefined4 *)(in_EAX + 0x18);
    uVar2 = FUN_0024a840(&local_4,&local_4);
    /* Original 0x0010BB92 stores AL to the low byte of [ESP+0x14],
     * followed by 0x0010BB96 reading the entire 32-bit guest word.
     * Upper 24 bits are NOT initialized here; preserve the partial write.
     * 0x0024A840 reads the high byte of incoming ECX, not proven C args.
     * TODO ABI_UNVERIFIED: guest stack identity and implicit ECX input. */
    ((uint8_t *)&local_4)[0] = (uint8_t)uVar2;
    FUN_00087630(uVar1,in_EAX + 0x10,local_4);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(in_EAX + 0x14));
  }
  *(undefined4 *)(in_EAX + 0x14) = 0;
  *(undefined4 *)(in_EAX + 0x18) = 0;
  *(undefined4 *)(in_EAX + 0x1c) = 0;
  return;
}
