/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6993D005A7CD766339F2DA45BBF80D34763504BA4D301D6B50212F80AE6A19BF
 * Entry: 0x000a7270, Ghidra index: 1985, label: FUN_000a7270
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040041c;
extern uint32_t *DAT_004432fc;
extern uint32_t *DAT_00443300;
extern char s_23_23_INamedTexture_004060e0[];
/* WARNING: Removing unreachable block (ram,0x000a73c2) */

uint FUN_000a7270(int param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int *unaff_ESI;
  char *pcVar4;
  uint uVar5;
  char *unaff_EDI;
  uint *puVar6;
  int *piStack_4c;
  uint local_48 [2];
  undefined4 uStack_40;
  uint local_34;
  uint uStack_2c;
  undefined4 local_24;
  undefined4 local_20;
  uint local_18;
  int local_8;
  uint local_4;
  
  pcVar4 = (char *)(param_1 + 4);
  piStack_4c = (int *)(uint)(uint3)piStack_4c;
  iVar3 = (int)pcVar4 - (int)unaff_EDI;
  do {
    cVar1 = *unaff_EDI;
    unaff_EDI[iVar3] = cVar1;
    unaff_EDI = unaff_EDI + 1;
  } while (cVar1 != '\0');
  local_20 = 0xf;
  local_4 = 0xf;
  local_24 = 0;
  local_34 = local_34 & 0xffffff00;
  local_8 = 0;
  local_18 = local_18 & 0xffffff00;
  pcVar2 = pcVar4;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_0001fed0(pcVar4,(int)pcVar2 - (param_1 + 5));
  FUN_0001f4f0(&DAT_0040041c,0,0xffffffff);
  FUN_001e8a20();
  FUN_000784c0(0);
  FUN_000784c0(0);
  if (0xf < local_4) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(local_18);
  }
  local_48[0] = 0;
  puVar6 = local_48;
  cVar1 = (**(code **)(*DAT_00443300 + 0x10))();
  if (cVar1 != '\0') {
    local_48[0] = 0;
    (**(code **)(*DAT_004432fc + 0x3c))(DAT_004432fc,2,local_48,unaff_ESI);
    uVar5 = 0;
    if (local_48[0] != 0) {
      do {
        piStack_4c = (int *)0x0;
        iVar3 = (**(code **)(*DAT_004432fc + 0x40))(DAT_004432fc,2,uVar5,&piStack_4c,unaff_ESI);
        if ((-1 < iVar3) &&
           (iVar3 = (**(code **)(*piStack_4c + 0x10))
                              (piStack_4c,s_23_23_INamedTexture_004060e0,&stack0xffffffb0),
           -1 < iVar3)) {
          FUN_000a7160(local_8);
        }
        if (piStack_4c != (int *)0x0) {
          (**(code **)(*piStack_4c + 8))(piStack_4c);
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < local_48[0]);
    }
    *(byte *)(local_8 + 0x114) = *(byte *)(local_8 + 0x114) & 0xfe;
    puVar6 = (uint *)0x1000000;
  }
  if (unaff_ESI != (int *)0x0) {
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
  }
  if (uStack_2c < 0x10) {
    return (uint)puVar6 >> 0x18;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(uStack_40);
}
