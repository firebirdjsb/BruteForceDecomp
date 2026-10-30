/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B1A408DAE13E952FECB7F195A1FFBB88BD9BA0E1A7379D37ADD358E44C9FD742
 * Entry: 0x00069f10, Ghidra index: 1178, label: FUN_00069f10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0006a150(void);
extern void FUN_0006a110(void);
extern void FUN_0006a0d0(void);
extern void FUN_0006a090(void);
extern void FUN_0006a050(void);
extern void FUN_0006a2b0(void);
extern void FUN_0006a470(void);
extern void FUN_0006a010(void);
extern void FUN_0006a240(void);
extern void FUN_0006a190(byte param_1);
extern void FUN_00069fb0(int *param_1);

void FUN_00069f10(void)

{
  int iVar1;
  int unaff_ESI;
  
  FUN_0006a150();
  FUN_0006a110();
  FUN_0006a0d0();
  FUN_0006a090();
  FUN_0006a050();
  iVar1 = *(int *)(unaff_ESI + 0x20);
  if (iVar1 != 0) {
    FUN_0006a2b0();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar1);
  }
  *(undefined4 *)(unaff_ESI + 0x20) = 0;
  iVar1 = *(int *)(unaff_ESI + 0x1c);
  if (iVar1 != 0) {
    FUN_0006a470();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar1);
  }
  *(undefined4 *)(unaff_ESI + 0x1c) = 0;
  FUN_0006a010();
  iVar1 = *(int *)(unaff_ESI + 8);
  if (iVar1 != 0) {
    FUN_0006a240();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar1);
  }
  *(undefined4 *)(unaff_ESI + 8) = 0;
  if (*(int *)(unaff_ESI + 4) != 0) {
    FUN_0006a190(1);
  }
  *(undefined4 *)(unaff_ESI + 4) = 0;
  FUN_00069fb0(unaff_ESI);
  return;
}
