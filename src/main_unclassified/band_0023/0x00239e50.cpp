/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1AB72D9AC1BEBEA98857364D52BC9DCAB07DD73354FBADB42D4FF4A7D8A86896
 * Entry: 0x00239e50, Ghidra index: 7896, label: FUN_00239e50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_0046990c;
extern uint32_t DAT_0046cfc8;
extern char s_23_23_ISchema_00406e3c[];
extern char s_someone_is_using_get_string_0040dbb4[];
/* WARNING: Removing unreachable block (ram,0x00239fdf) */

int FUN_00239e50(int *param_1)

{
  int *in_EAX;
  int iVar1;
  int *unaff_EDI;
  int *piVar2;
  int *piVar3;
  int *piStack_138;
  int *piStack_134;
  int *piStack_130;
  char *pcStack_12c;
  byte bStack_114;
  int aiStack_10c [67];
  
  pcStack_12c = s_someone_is_using_get_string_0040dbb4;
  piStack_130 = (int *)0x239e6d;
  XAPILIB__OutputDebugStringA();
  piStack_130 = (int *)0xffffffff;
  piStack_134 = (int *)0x0;
  piStack_138 = (int *)0x239e80;
  FUN_0001f5a0();
  if ((param_1[5] != 0) || (*param_1 == 0)) {
    return 0;
  }
  piStack_130 = aiStack_10c;
  piStack_138 = (int *)0x239e9d;
  piStack_134 = in_EAX;
  (**(code **)(*in_EAX + 0xc))();
  if ((bStack_114 & 2) != 0) {
    piStack_138 = in_EAX;
    (**(code **)(*in_EAX + 4))();
    if (unaff_EDI != DAT_0046cfc8) {
      do {
        if (in_EAX != (int *)0x0) {
          (**(code **)(*in_EAX + 8))(in_EAX);
          in_EAX = (int *)0x0;
        }
        (**(code **)(*unaff_EDI + 0x18))(unaff_EDI,&stack0xfffffedc);
        if (in_EAX == (int *)0x0) {
          if (unaff_EDI != DAT_0046cfc8) {
            if (unaff_EDI == (int *)0x0) {
              return -0x7fffbffb;
            }
            (**(code **)(*unaff_EDI + 8))(unaff_EDI);
            goto LAB_0023a088;
          }
          break;
        }
        if (unaff_EDI != (int *)0x0) {
          (**(code **)(*unaff_EDI + 8))(unaff_EDI);
          unaff_EDI = (int *)0x0;
        }
        (**(code **)(*in_EAX + 0x10))(in_EAX,s_23_23_ISchema_00406e3c,&stack0xfffffed8);
      } while (unaff_EDI != DAT_0046cfc8);
    }
    FUN_0015e4b0();
    if (unaff_EDI != DAT_0046cfc8) {
      do {
        piVar3 = (int *)0x0;
        piVar2 = (int *)&stack0xfffffee0;
        (**(code **)(*DAT_0046990c + 0x20))(DAT_0046990c,0xe07067e,piVar2,unaff_EDI);
        if (piStack_134 != (int *)0x0) {
          piStack_130 = (int *)0x0;
          iVar1 = (**(code **)(*DAT_0046990c + 0x20))
                            (DAT_0046990c,*param_1,&piStack_130,piStack_134,0);
          if (-1 < iVar1) {
            iVar1 = (**(code **)(*piStack_130 + 0x2c))(piStack_130,&stack0xfffffed8,0x104);
            if (-1 < iVar1) {
              FUN_00078c20();
            }
            FUN_00076fc0();
            FUN_00076fc0();
            FUN_00076fc0();
            if (piVar2 != (int *)0x0) {
              (**(code **)(*piVar2 + 8))(piVar2);
            }
            return iVar1;
          }
          if (piStack_130 != (int *)0x0) {
            (**(code **)(*piStack_130 + 8))(piStack_130);
          }
        }
        if (piStack_138 != (int *)0x0) {
          (**(code **)(*piStack_138 + 8))(piStack_138);
          piStack_138 = (int *)0x0;
        }
        (**(code **)(*piVar3 + 0x18))(piVar3,&piStack_138);
        if (in_EAX == (int *)0x0) {
          FUN_00076fc0();
          break;
        }
        if (unaff_EDI != (int *)0x0) {
          (**(code **)(*unaff_EDI + 8))(unaff_EDI);
          unaff_EDI = (int *)0x0;
        }
        (**(code **)(*in_EAX + 0x10))(in_EAX,s_23_23_ISchema_00406e3c,&stack0xfffffed8);
      } while (unaff_EDI != DAT_0046cfc8);
    }
    FUN_00076fc0();
LAB_0023a088:
    if (in_EAX != (int *)0x0) {
      (**(code **)(*in_EAX + 8))(in_EAX);
    }
  }
  return -0x7fffbffb;
}
