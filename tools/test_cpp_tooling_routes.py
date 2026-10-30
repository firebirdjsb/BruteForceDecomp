"""Active C++ command routing and historical fixture refusal regression tests."""
from pathlib import Path
import ast
import json
import subprocess
import sys
import tempfile
import unittest
from check_published_progress import check
from publish_cpp_progress import update
from sweep_c11 import FLAGS as LEGACY_NAME_FLAGS
from sweep_cpp_compat import FLAGS
from update_progress import update as historical_update

ROOT = Path(__file__).resolve().parents[1]


class CppToolingRoutes(unittest.TestCase):
    def test_old_sweep_name_exposes_strict_cpp_flags(self):
        self.assertEqual(tuple(LEGACY_NAME_FLAGS), FLAGS)
        self.assertIn('-std=c++17', FLAGS)
        self.assertFalse(any(flag.startswith('-Wno-') for flag in FLAGS))

    def test_historical_renderer_cannot_overwrite_active_progress(self):
        for explicit in (False, True):
            with self.assertRaises(ValueError):
                historical_update(ROOT, {}, historical_archive=explicit)
        with tempfile.TemporaryDirectory() as directory:
            with self.assertRaises(ValueError):
                historical_update(Path(directory), {}, historical_archive=True)

    def test_c_only_compiler_runners_require_explicit_historical_mode(self):
        archived = []
        for folder in ('tools', 'scripts'):
            for path in (ROOT / folder).glob('*.py'):
                source = path.read_text(encoding='utf-8')
                tree = ast.parse(source)
                parents = {child: parent for parent in ast.walk(tree)
                           for child in ast.iter_child_nodes(parent)}
                # An exact argument in a command/FLAGS sequence, not a policy
                # negative-control string or this test's own comparison.
                old_flag = any(isinstance(node, ast.Constant) and node.value == '-std=c11'
                               and isinstance(parents.get(node), (ast.List, ast.Tuple))
                               for node in ast.walk(tree))
                if not old_flag:
                    continue
                gated = any(isinstance(node, ast.Call) and isinstance(node.func, ast.Name)
                            and node.func.id == 'require_historical_c11_opt_in'
                            for node in ast.walk(tree))
                self.assertTrue(gated, str(path))
                archived.append(path)
        self.assertGreater(len(archived), 100)
        for path in (ROOT/'scripts/verify_00155840_tail_operation.py',
                     ROOT/'tools/repair_verified_seh_immediates.py'):
            result = subprocess.run([sys.executable, str(path), '--help'],
                                    capture_output=True, text=True)
            self.assertNotEqual(result.returncode, 0)
            self.assertIn('ARCHIVED historical C11', result.stderr)
            self.assertIn('sweep_cpp_compat.py', result.stderr)

    def test_cpp_publication_and_deliberate_corruptions(self):
        state = dict(schema_version=2, status='complete_host_cpp_syntax_audit',
                     audited_commit='a'*40, workflow_run_id=123, total=13694,
                     passing=13250, failing=444, percentage=96.76,
                     roadmap_percentage=13.82,
                     roadmap_method='seven_equal_phases_cpp_syntax_fraction_six_unverified_zero_credited',
                     body_hash_mismatches=0, native_pc_build='not_yet_buildable_or_playable')
        with tempfile.TemporaryDirectory() as directory:
            root=Path(directory)
            (root/'docs/progress').mkdir(parents=True)
            (root/'README.md').write_text('<!-- BF_PROGRESS_START --><!-- BF_PROGRESS_END -->')
            update(root,state)
            check(root)
            target=root/'docs/progress/current.json'
            for key,value in (('schema_version',1),('status','complete_c11_audit'),
                              ('passing',13251),('percentage',99.99),
                              ('body_hash_mismatches',1),('workflow_run_id',0)):
                target.write_text(json.dumps({**state,key:value}))
                with self.assertRaises(ValueError,msg=key):check(root)
            target.write_text(json.dumps(state))
            svg=root/'docs/progress/cpp-syntax.svg'
            svg.write_text(svg.read_text().replace('444 failing','443 failing'))
            with self.assertRaises(ValueError):check(root)

    def test_last_confirmed_cpp_audit_is_not_current_source_coverage(self):
        state = dict(schema_version=2,
                     status='last_confirmed_full_cpp_audit_newer_source_reaudit_required',
                     audited_commit='b'*40, workflow_run_id=456, total=13694,
                     passing=2348, failing=11346, percentage=17.15, roadmap_percentage=2.45,
                     roadmap_method='seven_equal_phases_cpp_syntax_fraction_six_unverified_zero_credited',
                     body_hash_mismatches=0, native_pc_build='not_yet_buildable_or_playable')
        with tempfile.TemporaryDirectory() as directory:
            root=Path(directory);folder=root/'docs/progress';folder.mkdir(parents=True)
            (folder/'current.json').write_text(json.dumps(state))
            text=('<!-- BF_PROGRESS_START -->Last confirmed full C++17 syntax audit: 17.15% '
                  '2,348 / 13,694 passing; 11,346 failing /commit/'+'b'*40+
                  ' /actions/runs/456 Newer source repairs are awaiting their own full audit. '
                  'roadmap proxy: 2.45% not actual game completion NOT yet buildable or playable'
                  '<!-- BF_PROGRESS_END -->')
            (root/'README.md').write_text(text)
            (folder/'cpp-syntax.svg').write_text('C++17 syntax coverage: 17.15 percent '
                '2348 of 13694 2,348 / 13,694 bbbbbbb width="127.60"')
            (folder/'overall.svg').write_text('roadmap tracking: 2.45 percent width="18.23" not verified game completion')
            check(root)
            (root/'README.md').write_text(text.replace('Newer source repairs are awaiting their own full audit.',
                                                     'These numbers measure the latest source.'))
            with self.assertRaises(ValueError):check(root)


if __name__ == '__main__':
    unittest.main()
