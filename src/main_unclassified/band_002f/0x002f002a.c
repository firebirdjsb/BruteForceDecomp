/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 756DEDAE4AA6655E3CF3E7633D975852B05768C7AA766AF0995ACBF5969D677F
 * Entry: 0x002f002a, Ghidra index: 10734, label: FUN_002f002a
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040f4f0;
extern uint32_t DAT_0040f56a;
extern uint32_t DAT_0040f56c;
extern uint32_t _DAT_0040f564;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002f002a(void)

{
  char cVar1;
  int unaff_EBP;
  ushort in_FPUStatusWord;
  float10 in_ST0;
  
  DAT_0040f56c = '\0';
  if (DAT_0040f4f0 != 0) {
    DAT_0040f56c = 0;
    return;
  }
  _DAT_0040f564 = (double)in_ST0;
  cVar1 = *(char *)(unaff_EBP + -0x90);
  if (cVar1 != '\0') {
    if (cVar1 != -1) {
      if (cVar1 != -2) {
        if (cVar1 == '\0') {
          DAT_0040f56c = 0;
          return;
        }
        *(int *)(unaff_EBP + -0x8e) = (int)cVar1;
        goto LAB_002f0114;
      }
      if (((ulonglong)_DAT_0040f564 & 0x7ff0000000000000) == 0) {
        *(undefined4 *)(unaff_EBP + -0x8e) = 4;
        in_ST0 = (float10)fscale(in_ST0,(float10)1536.0);
        if (ABS(in_ST0) < (float10)2.2250738585072014e-308) {
          in_ST0 = in_ST0 * (float10)0.0;
        }
        goto LAB_002f0114;
      }
    }
    if ((DAT_0040f56a & 0x7ff0) == 0x7ff0) {
      *(undefined4 *)(unaff_EBP + -0x8e) = 3;
      in_ST0 = (float10)fscale(in_ST0,(float10)-1536.0);
      if ((float10)1.7976931348623157e+308 < ABS(in_ST0)) {
        in_ST0 = in_ST0 * (float10)INFINITY;
      }
      goto LAB_002f0114;
    }
  }
  if ((*(ushort *)(unaff_EBP + -0xa4) & 0x20) != 0) {
    DAT_0040f56c = 0;
    return;
  }
  if ((in_FPUStatusWord & 0x20) == 0) {
    DAT_0040f56c = 0;
    return;
  }
  *(undefined4 *)(unaff_EBP + -0x8e) = 8;
LAB_002f0114:
  *(int *)(unaff_EBP + -0x8a) = *(int *)(unaff_EBP + -0x94) + 1;
  if (DAT_0040f56c == '\0') {
    *(undefined4 *)(unaff_EBP + -0x86) = *(undefined4 *)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -0x82) = *(undefined4 *)(unaff_EBP + 0xc);
    if (*(char *)(*(int *)(unaff_EBP + -0x94) + 0xd) != '\x01') {
      *(undefined4 *)(unaff_EBP + -0x7e) = *(undefined4 *)(unaff_EBP + 0x10);
      *(undefined4 *)(unaff_EBP + -0x7a) = *(undefined4 *)(unaff_EBP + 0x14);
    }
  }
  *(double *)(unaff_EBP + -0x76) = (double)in_ST0;
  FUN_002f19d2((int)*(char *)(*(int *)(unaff_EBP + -0x94) + 0xe),unaff_EBP + -0x8e,unaff_EBP + -0xa4
              );
  return;
}
