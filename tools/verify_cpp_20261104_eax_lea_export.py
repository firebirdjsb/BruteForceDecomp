#!/usr/bin/env python3
"""Optional selected-record replay; full private exports are not required by CI."""
from __future__ import annotations
import argparse
import copy
import csv
import json
from pathlib import Path
import sys
from test_cpp_20261104_eax_lea_calls import MANIFEST_NAME, MANIFEST_SHA, validate_contract


def replay(root, candidate_root, functions, use_capstone=False):
    sys.path.insert(0,str(root/'tools'))
    from verify_cpp_20261104_heap_free_export import (sha, require, strict_json,
        selected_records, validate_record, independent_boundaries)
    with (candidate_root/MANIFEST_NAME).open('rb') as stream:raw=stream.read(1024*1024+1)
    require(sha(raw)==MANIFEST_SHA,'EAX manifest hash changed')
    document=strict_json(raw);validate_contract(document)
    with (root/'metadata/bulk_13694_inventory.csv').open() as stream:
        inventory={r['entry']:r['original_body_sha256'] for r in csv.DictReader(stream)}
    items={c['entry']:copy.deepcopy(c) for c in document['cases']+[document['callee']]}
    records=selected_records(functions,items)
    version=None
    for entry,item in items.items():
        require(inventory[entry]==item['original_body_sha256'],'canonical body hash differs')
        item['instruction_windows']={str(i):w for i,w in enumerate(item['instruction_windows'])}
        validate_record(records[entry],item)
        if use_capstone:version=independent_boundaries(records[entry])
    return {'matched_body_functions':len(items),'adjacent_context_needed':False,
            'independent_decoder':('Capstone '+version) if version else None,
            'whole_xbe_reauthenticated':False,'original_game_functions_executed':False}


if __name__=='__main__':
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--root',type=Path,default=Path(__file__).resolve().parents[1])
    parser.add_argument('--candidate-root',type=Path)
    parser.add_argument('--functions',type=Path,required=True)
    parser.add_argument('--capstone',action='store_true')
    args=parser.parse_args()
    print(json.dumps(replay(args.root,args.candidate_root or args.root,args.functions,args.capstone),sort_keys=True))
