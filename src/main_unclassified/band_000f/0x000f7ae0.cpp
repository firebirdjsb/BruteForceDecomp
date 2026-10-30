/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2E1BCF19D96FD5E13A27095D3E38111BCFD118831F7892710370CE912F146229
 * Entry: 0x000f7ae0, Ghidra index: 3107, label: FUN_000f7ae0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Matching original XBE: these two guest VAs contain NUL-terminated
 * 16-bit UTF-16 format strings, referenced by PUSH immediate instructions.
 * Syntax-only declarations; guest-to-host relocation/linking is NOT done. */
extern const uint16_t u__s__1__0040cd38[];
extern const uint16_t u__s__2__0040cd28[];

undefined4 FUN_000f7ae0(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_ESI;
  undefined4 *puVar4;
  undefined4 uStack_a8;
  int *piStack_a4;
  undefined1 auStack_a0 [160];
  
  if ((unaff_ESI != (int *)0x0) && (unaff_ESI[1] != 0)) {
    iVar2 = (**(code **)(*unaff_ESI + 4))();
    if ((iVar2 == 3) &&
       (((*(int *)(unaff_ESI[1] + 0xa8) != 0 &&
         (iVar2 = *(int *)(*(int *)(unaff_ESI[1] + 0xa8) + 0xc4c), iVar2 != 0)) &&
        (*(int *)(iVar2 + 0x14) == 0x62bd076)))) {
      FUN_0010caa0();
      piStack_a4 = *(int **)(iVar2 + 0x1c);
      if ((*(int **)(iVar2 + 0x18) != (int *)0x0) && (piStack_a4 != (int *)0x0)) {
        if (**(int **)(iVar2 + 0x18) == *piStack_a4) {
          cVar1 = FUN_00088bc0();
          if (cVar1 != '\0') {
            uVar3 = FUN_001e97c0();
            FUN_002ea9a9(auStack_a0,0x50,u__s__1__0040cd38,uVar3);
            uStack_a8 = 0;
            FUN_0010c660(&uStack_a8);
          }
          cVar1 = FUN_00088bc0();
          if (cVar1 != '\0') {
            uVar3 = FUN_001e97c0();
            FUN_002ea9a9(auStack_a0,0x50,u__s__2__0040cd28,uVar3);
            uStack_a8 = 1;
            FUN_0010c660(&uStack_a8);
            return 1;
          }
        }
        else {
          cVar1 = FUN_00088bc0();
          if (cVar1 != '\0') {
            puVar4 = &uStack_a8;
            uStack_a8 = 0;
            FUN_001e97c0(puVar4);
            FUN_0010c660(puVar4);
          }
          cVar1 = FUN_00088bc0();
          if (cVar1 != '\0') {
            puVar4 = &uStack_a8;
            uStack_a8 = 1;
            FUN_001e97c0(puVar4);
            FUN_0010c660(puVar4);
          }
        }
        return 1;
      }
    }
  }
  return 0;
}
